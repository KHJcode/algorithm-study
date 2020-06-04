dp = [0,1,2,4]
for _ in range(4,14):   dp.append(sum(dp[-3:]))
for _ in range(int(input())):    print(dp[int(input())])