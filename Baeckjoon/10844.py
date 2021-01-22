n = int(input())
dp = [[0]+[1]*9]
for i in range(1,n+1):
  dp.append([]);var=dp[i-1]
  for j in range(10):
    if j == 0:  dp[i].append(var[1])
    elif j == 9:  dp[i].append(var[8])
    else:  dp[i].append(var[j-1]+var[j+1])
print(sum(dp[n-1])%1000000000)