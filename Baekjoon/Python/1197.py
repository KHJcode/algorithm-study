from collections import deque
import sys
input = sys.stdin.readline

v, e = map(int, input().split())
gph = [i for i in range(v + 1)]
que = []
def find(x):
    arr = deque([])
    while gph[x] != x:
        arr.append(x)
        x = gph[x]
    for i in arr:
        gph[i] = x
    return x
def merge(a, b):
    ax = find(a)
    bx = find(b)
    if ax != bx:
        root = min(ax, bx)
        child = max(ax, bx)
        gph[child] = root
for _ in range(e):
    a, b, c = map(int, input().split())
    que.append((c, [a, b]))
que.sort(key = lambda x : x[0])
c = 0
for x in que:
    if find(x[1][0]) != find(x[1][1]):
        merge(x[1][0], x[1][1])
        c += x[0]
print(c)
