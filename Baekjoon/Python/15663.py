import sys
input = sys.stdin.readline
n, m = map(int, input().split())
arr = sorted(list(map(int, input().split())))
vst = [False, False, False, False, False, False, False, False, False]
mp  = {}
cur = []
vur = []
def rec(x, c):
    if c == m:
        if not str(vur) in mp:
            mp[str(vur)] = 1
            for j in vur:
                print(j, end=' ')
            print()
        return
    for j in range(len(arr)):
        if not vst[j]:
            vst[j] = True
            cur.append(j);
            vur.append(arr[j])
            rec(j, c + 1)
            cur.pop(-1)
            vur.pop(-1)
            vst[j] = False
for i in range(len(arr)):
    vst[i] = True
    cur.append(i)
    vur.append(arr[i])
    rec(i, 1)
    cur.pop(-1)
    vur.pop(-1)
    vst[i] = False
