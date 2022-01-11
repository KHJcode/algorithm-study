n = int(input())
t = []
p = []
dp = []
for i in range(n):
    a,b = map(int, input().split())
    t.append(a)
    p.append(b)
    dp.append(b)
dp.append(0)
for j in range(n-1,-1,-1):
    if t[j]+j > n:
        dp[j] = dp[j+1]
    else:
        dp[j] = max(dp[j+1], p[j]+dp[j+t[j]])
print(dp[0])