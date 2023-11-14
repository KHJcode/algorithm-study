from collections import deque
from copy import deepcopy
import sys
input = sys.stdin.readline

DY = [0, 0, 1, -1]
DX = [1, -1, 0, 0]
ans = 0
n, m = map(int, input().split())
arr = []
vst = []
copy_vst = []
cur = 0
for y in range(n):
    arr.append(list(map(int, input().split())))
    vst.append([])
    copy_vst.append([])
    for x in range(m):
        vst[y].append(True)
        copy_vst[y].append(True)
        cur += int(arr[y][x] == 1)

def melt(round):
    que = deque([(0, 0)])
    while len(que) > 0:
        y, x = que.pop()
        if not (y < n and 0 <= y and x < m and 0 <= x) or not vst[y][x]:
            continue
        vst[y][x] = False
        if arr[y][x] == 1:
            arr[y][x] = round
            continue
        elif arr[y][x] == round:
            continue
        for i in range(4):
            que.appendleft((y + DY[i], x + DX[i]))

def get_count():
    cnt = 0
    for y in range(n):
        for x in range(m):
            cnt += int(arr[y][x] == 1)
    return cnt

last = get_count()
round = 2
while last > 0:
    cur = last
    melt(round)
    ans += 1
    vst = deepcopy(copy_vst)
    round += 1
    last = get_count()
print(ans)
print(cur)
