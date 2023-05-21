from collections import deque

n, k = map(int, input().split())
que = deque([(n, 0)])
MX = max(n, k) + 2
vst = [0 for _ in range(MX)]
res = MX
cnt = 0
while que:
    x = que.popleft()
    vst[x[0]] = True
    if x[0] == k:
        if res > x[1]:
            cnt = 1
            res = x[1]
        elif res == x[1]:
            cnt += 1
        continue
    if res <= x[1]:
        continue
    for i in [x[0] - 1, x[0] + 1, x[0] * 2]:
        if -1 < i and i < MX and vst[i] == 0:
            que.append((i, x[1] + 1))
print(res)
print(cnt)
