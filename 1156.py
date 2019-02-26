x = input()
b = ""
if x[-1] == 'y':
    b = x[0:-1] + 'ies'
elif x[-1] == {s,x,ch,sh,o}:
    b = x + 'es'
else:
    b = x + 's'
print(b)