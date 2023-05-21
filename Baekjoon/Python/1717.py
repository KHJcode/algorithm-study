import sys
input = sys.stdin.readline

n, m = map(int, input().split())
gph = [i for i in range(n + 1)]
def find(x):
    arr = []
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
for _ in range(m):
    x, a, b = map(int, input().split())
    if x == 1:
        print('YES' if find(a) == find(b) else 'NO')
    else:
        merge(a, b)
