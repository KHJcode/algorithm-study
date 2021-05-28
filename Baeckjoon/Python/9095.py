dp = [1,2,4]
for i in range(3,10):  dp.append(sum(dp[-3:i]))
for _ in range(int(input())):  print(dp[int(input())-1])