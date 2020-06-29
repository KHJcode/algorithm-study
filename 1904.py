n = int(input())
dp = [1,2]
for i in range(2,n):  dp.append((dp[i-1]+dp[i-2])%15746)
print(dp[n-1])

#a=b=1
#for i in[0]*int(input()):  a,b=b%15746,a+b;print(a,b)
#print(a,b)