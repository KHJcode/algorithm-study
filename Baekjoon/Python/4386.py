from collections import deque
import sys
input = sys.stdin.readline

def dis(a, b):
    return (abs(a[0] - b[0]) ** 2 + abs(a[1] - b[1]) ** 2) ** 0.5
n = int(input())
arr = [tuple(map(float, input().split())) for _ in range(n)]
gph = [i for i in range(n + 1)]
que = []
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
for i in range(len(arr) - 1):
    for j in range(i + 1, len(arr)):
        que.append((dis(arr[i], arr[j]), (i, j)))
que.sort(key = lambda x : x[0])
c = 0
for x in que:
    if find(x[1][0]) != find(x[1][1]):
        merge(x[1][0], x[1][1])
        c += x[0]
print(c)
