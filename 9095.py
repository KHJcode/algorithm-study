dp = [1,2,4]
for i in range(4,11):    dp.append(sum(dp[-3:]))
for i in range(int(input())):   print(dp[int(input())-1])