from collections import deque
import sys
input = sys.stdin.readline

m, n = map(int, input().split())
while m != 0 or n != 0:
    gph = [i for i in range(m)]
    que = []
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
    c = 0
    for _ in range(n):
        x, y, z = map(int, input().split())
        que.append((z, (x - 1, y - 1)))
        c += z
    res = 0
    que.sort(key = lambda x : x[0])
    for x in que:
        if find(x[1][0]) != find(x[1][1]):
            res += x[0]
            merge(x[1][0], x[1][1])
    print(c - res)
    m, n = map(int, input().split())
