import sys
from collections import deque
input = sys.stdin.readline

def dis(a, b):
    return (abs(a[0] - b[0]) ** 2 + abs(a[1] - b[1]) ** 2) ** 0.5
n, m = map(int, input().split())
arr = []
gph = []
for i in range(1, n + 1):
    arr.append(tuple(map(int, input().split())))
    gph.append(i - 1)
def find(x):
    tr = deque([])
    while x != gph[x]:
        tr.append(x)
        x = gph[x]
    for i in tr:
        gph[i] = x
    return x
def merge(a, b):
    ax = find(a)
    bx = find(b)
    if ax != bx:
        root = min(ax, bx)
        child = max(ax, bx)
        gph[child] = root
for _ in range(m):
    a, b = map(int, input().split())
    merge(a - 1, b - 1)
que = []
for i in range(len(arr) - 1):
    for j in range(i + 1, len(arr)):
        if find(i) != find(j):
            que.append((dis(arr[i], arr[j]), (i, j)))
que.sort(key = lambda x : x[0])
c = 0
for x in que:
    if find(x[1][0]) != find(x[1][1]):
        merge(x[1][0], x[1][1])
        c += x[0]
res = str(round(c, 2)).split('.')
print(res[0] + '.' + res[1][0] + ('0' if len(res[1]) == 1 else res[1][1]))
