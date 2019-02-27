x = input()
b = ""
m = 0
a = ['s','x','o']
for i in range(3):
    if x[-1] == a[i]:
        m = 1
    if x[-2] + x[-1] == 'ch' or x[-2] + x[-1] == "sh":
        m = 1
if x[-1] == 'y':
    b = x[0:-1] + 'ies'
elif m == 1:
    b = x + 'es'
else:
    b = x + 's'
print(b)