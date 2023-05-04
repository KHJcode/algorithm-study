import sys
input = sys.stdin.readline
sys.setrecursionlimit(100000)

MX = 100001
visited = [0 for _ in range(MX)]
gph = [[] for _ in range(MX)]
cnt = [0]

def dfs(x):
    if visited[x] == 0:
        cnt[0] += 1
        visited[x] = cnt[0]
        for i in sorted(gph[x]):
            dfs(i)

n, m, r = map(int, input().split())
for _ in range(m):
    u, v = map(int, input().split())
    gph[u].append(v)
    gph[v].append(u)
dfs(r)
for i in range(1, n + 1):
    print(visited[i])
