import sys
from collections import deque

n, m = map(int, input().split())
gph = [i for i in range(n + 1)]
def find(x):
    arr = deque([])
    while x != gph[x]:
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
for i in range(1, m + 1):
    a, b = map(int, input().split())
    if find(a) == find(b):
        print(i)
        break
    merge(a, b)
else:
    print(0)
