n = int(input())
dp = [1,2]
for i in range(2,n):  dp.append(sum(dp[-2:i])%15746)
print(dp[n-1])
# test