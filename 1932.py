n = int(input())
triangle = [list(map(int, input().split())) for _ in range(n)]
dp = [[] for _ in range(n)]
for i in range(n-1,-1,-1):
    for j in range(len(triangle[i])):
        if i == n-1:    dp[i].append(triangle[i][j]);continue
        dp[i].append(triangle[i][j] + max(dp[i+1][j], dp[i+1][j+1]))
print(dp[0][0])