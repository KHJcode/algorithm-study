import sys
input = sys.stdin.readline

MX = 100001
cnt = 1
visited = [0] * MX
gph = [[] for _ in range(MX)]
n, m, r = map(int, input().split())
for _ in range(m):
    u, v = map(int, input().split())
    gph[u].append(v)
    gph[v].append(u)
que = [r]
visited[r] = cnt
while len(que):
    x = que.pop()
    for v in sorted(gph[x], reverse=True):
        if visited[v] == 0:
            cnt += 1
            visited[v] = cnt
            que.insert(0, v)
for i in range(1, n + 1):
    print(visited[i])
