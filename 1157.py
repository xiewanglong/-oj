a = [int(x) for x in input()]
n = int(input())
m,m1 = 0,0
for i in range(len(a)-n+1):
    m1 = 0
    for r in range(n):
        if a[i + r] == 1:
            m1 = 1 + m1
    if m1 == n:
        m = m + 1
print(m)