dp = [0] * 41
dp[1], dp[2] = 1, 1
for i in range(3, 41):
    dp[i] = dp[i-1] + dp[i-2]
print(dp[40])