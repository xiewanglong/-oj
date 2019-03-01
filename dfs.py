def quanpailie(arr,used,res,m,n,step):
    if step >= m:
        print(*res[:m])
        return 
    for i in range(n):
        if used[i]:
            continue
        used[i],res[step] = True,arr[i]
        quanpailie(arr,used,res,m,n,step+1)
        used[i]=False
arr,used,res = [0] * 100, [False] * 100,[0] * 100
n,m = [int(x) for x in input().split()]
arr = [int(x) for x in input().split()]
quanpailie(arr,used,res,m,n,0)