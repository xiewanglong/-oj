while True:
    a = input().split()
    if a == ['#']:
        break
    print(len(set(a)))