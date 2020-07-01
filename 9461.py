def P(n):
  for i in range(3,n+1):  dp.append(dp[i-2]+dp[i-3])
  return dp[n-1]

for _ in range(int(input())):
  get=int(input())
  dp=[1]*3
  print(P(get))
