import sys
import copy
input = sys.stdin.readline

dvst = [[0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]]
mp = []
bag = 0
size = 2
time = 0
dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]
n = int(input())
cur = (0, 0)
alld = []
for i in range(n):
    mp.append([])
    new = list(map(int, input().split()))
    for j in range(n):
        mp[i].append(new[j])
        if mp[i][j] == 9:
            cur = (i, j)
        elif mp[i][j] > 0:
            alld.append((i, j))

def check(x, y):
    return x >= 0 and x < n and y >= 0 and y < n and mp[x][y] <= size

def get_dis(sx, sy, tx, ty):
    vst = copy.deepcopy(dvst)
    que = [[sx, sy, 0]]
    v = [0, 0, 0]
    finded = False
    while len(que) > 0:
        v = que[0]
        del que[0]
        if v[0] == tx and v[1] == ty:
            finded = True
            break
        for w in range(4):
            nx = v[0] + dx[w]
            ny = v[1] + dy[w]
            if check(nx, ny) and vst[nx][ny] == 0:
                vst[nx][ny] = 1
                que.append([nx, ny, v[2] + 1])
    return v[2], finded

while len(alld) > 0:
    mnv = [n + 1, n + 1, n * n + 1]
    mdx = -1
    for idx in range(len(alld)):
        x, y = alld[idx]
        if mp[x][y] < size:
            dis, finded = get_dis(cur[0], cur[1], x, y)
            if finded:
                if mnv[2] > dis:
                    mnv = (x, y, dis)
                    mdx = idx
                elif mnv[2] == dis:
                    if mnv[0] == x and y < mnv[1]:
                        mnv = (x, y, dis)
                        mdx = idx
                    elif mnv[0] > x:
                        mnv = (x, y, dis)
                        mdx = idx
    if mdx == -1:
        break
    del alld[mdx]
    bag += 1
    if bag == size:
        size += 1
        bag = 0
    time += mnv[2]
    mp[cur[0]][cur[1]] = 0
    mp[mnv[0]][mnv[1]] = 9
    cur = (mnv[0], mnv[1])
print(time)
