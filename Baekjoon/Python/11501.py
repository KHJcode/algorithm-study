import sys
input = sys.stdin.readline

res = []
t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    arr = list(map(int, input().split()))
    mx = arr[n - 1]
    earn = 0
    for i in range(n - 2, -1, -1):
        if arr[i] > mx:
            mx = arr[i]
        else:
            earn += mx - arr[i]
    res.append(earn)
for i in res:
    print(i)
