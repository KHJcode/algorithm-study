import sys
from collections import deque
input = sys.stdin.readline

t = int(input())
c = 0
mp = None
gph = None
cnt = None
res = deque([])
def gen():
    global c
    c += 1
    return c
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
        cnt[root] += cnt[child]
        gph[child] = root
while t:
    t -= 1
    f = int(input())
    mp = {}
    c = 0
    cnt = deque([])
    gph = deque([])
    for i in range(f * 2 + 1):
        gph.append(i)
        cnt.append(i)
    for _ in range(f):
        a, b = map(str, input().split())
        if a not in mp:
            mp[a] = gen()
            cnt[mp[a]] = 1
        if b not in mp:
            mp[b] = gen()
            cnt[mp[b]] = 1
        merge(mp[a], mp[b])
        res.append(cnt[find(mp[a])])
for i in res:
    print(i)
