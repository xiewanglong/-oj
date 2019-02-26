dp = [0] * 200
dp[0],dp[1] = 1,2
d = 0
for i in range(2,200):
    dp[i] = dp[i-1] + dp[i-2]
t = int(input())
for i in range(t):
    n = int(input())
    print(dp[n])
#dp[i-1]最后一个数字是0的情况
#dp[i-2]最后一个数字是1的情况
#两种情况加起来就是dp[i]