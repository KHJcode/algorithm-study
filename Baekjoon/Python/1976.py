import sys
input = sys.stdin.readline

n = int(input())
m = int(input())
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
        root = max(ax, bx)
        child = min(ax, bx)
        gph[child] = root
for i in range(1, n + 1):
    arr = list(map(int, input().split()))
    for j in range(len(arr)):
        if arr[j] == 1:
            merge(i, j + 1)
ans = list(map(int, input().split()))
crt = find(ans[0])
for i in range(1, len(ans)):
    x = find(ans[i])
    if x != crt:
        print('NO')
        break
else:
    print('YES')
