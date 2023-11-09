import sys
input = sys.stdin.readline

dy = [-1, 0, 1]
r, c = map(int, input().split())
arr = []
vst = []
arv = []
ans = 0
for _ in range(r):
    arr.append([*input()])
    vst.append([False] * c)
    arv.append(False)

def rec(y, x, st):
    if not (y >= 0 and y < r and x >= 0 and x < c) or arr[y][x] == 'x' or vst[y][x]:
        return
    vst[y][x] = True
    if x == c - 1:
        arv[st] = True
        global ans
        ans += 1
    for d in dy:
        if not arv[st]:
            rec(y + d, x + 1, st)

for i in range(r):
    rec(i, 0, i)
print(ans)
