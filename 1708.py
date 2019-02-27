a = 1000000 * [0]
a[0] = 0
for i in range(1,1000000):
    a[i] = a[i-1] * 2 + i
n = int(input())
for i in range(n):
    x = int(input())
    print(a[x])