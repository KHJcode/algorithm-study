import sys
input = sys.stdin.readline

t = int(input())
res = []
while t > 0:
    t -= 1
    n = int(input())
    arr = [tuple(map(int, input().split())) for _ in range(n)]
    arr.sort(key = lambda x : x[0])
    mx = arr[0][1]
    c = 1
    for i in range(1, len(arr)):
        if arr[i][1] < mx:
            mx = arr[i][1]
            c += 1
    res.append(c)
for i in res:
    print(i)
