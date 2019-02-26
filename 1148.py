import itertools
import math
n = [1,2,3,4,5,6,7,8,9]
for i in itertools.permutations(n, 9):
    a = i[0] * 100 + i[1] * 10 + i[2]
    b = i[3] * 100 + i[4] * 10 + i[5]
    c = i[6] * 100 + i[7] * 10 + i[8]
    a1,b1,c1 = math.sqrt(a),math.sqrt(b),math.sqrt(c)
    if a1 % 1 == 0 and b1 % 1 == 0 and c1 % 1 == 0 and a<b<c:
        print("%d %d %d"%(a,b,c))