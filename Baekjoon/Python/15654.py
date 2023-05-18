import sys
input = sys.stdin.readline
n, m = map(int, input().split())
arr = sorted(list(map(int, input().split())))
vst = [False, False, False, False, False, False, False, False, False]
cur = []
def rec(x, c):
    if c == m:
        for j in cur:
            print(arr[j], end=' ')
        print()
        return
    for j in range(len(arr)):
        if not vst[j]:
            vst[j] = True
            cur.append(j);
            rec(j, c + 1)
            cur.pop(-1)
            vst[j] = False
for i in range(len(arr)):
    vst[i] = True
    cur.append(i)
    rec(i, 1)
    cur.pop(-1)
    vst[i] = False
