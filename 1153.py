x = int(input())
for i in range(x):
    b = [0] * 5000000000
    y = int(input())
    a = [int(x) for x in input().split()]
    for i in range(y):
        b[a[i]] = b[a[i]] + 1
    print(max(b))