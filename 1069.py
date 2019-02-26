m,k = [int(x) for x in input().split()]
day = 0
while m>0:   
    if day % k == 0:
        m = m + 1
    day,m = day + 1, m - 1
print(day-1)