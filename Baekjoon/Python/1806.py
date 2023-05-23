import sys
input = sys.stdin.readline

n, s = map(int, input().split())
arr = list(map(int, input().split()))
sarr = [arr[0]]
for i in range(1, len(arr)):
    sarr.append(sarr[i - 1] + arr[i])
mn = 100001
i = -1
j = 0
while i < j:
    if i == -1:
        c = sarr[j]
    else:
        c = sarr[j] - sarr[i]
    if c < s:
        if j == n - 1:
            break
        j += 1
    else:
        mn = min(mn, j - i)
        i += 1
print(0 if mn == 100001 else mn)
