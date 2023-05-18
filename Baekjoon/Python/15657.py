import sys
input = sys.stdin.readline
n, m = map(int, input().split())
arr = sorted(list(map(int, input().split())))
cur = []
def rec(x, c):
    if c == m:
        for j in cur:
            print(arr[j], end=' ')
        print()
        return
    for j in range(x, len(arr)):
        cur.append(j);
        rec(j, c + 1)
        cur.pop()
for i in range(len(arr)):
    cur.append(i)
    rec(i, 1)
    cur.pop()
