c,x,y,n = 0,0,0,0
while True:
    time = int(input())
    cam = int(input())
    b,time,c = time,time - c,time
    if n == 0:
        y = y + 10 * time
    if n == 1:
        x = x + 10 * time
    if n == 2:
        y = y - 10 * time
    if n == 3:
        x = x - 10 * time
    if cam == 1:
        n = (n + 3) % 4
    if cam == 2:
        n = (n + 1) % 4
    if cam == 3:
        break
print("%d %d"%(x,y))
