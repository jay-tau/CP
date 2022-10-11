for _ in range(int(input())):
    flag  = True
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    current = 0
    for day in range(len(a)):
        current += a[day]
        if k > current:
            print("NO", (day+1)); flag = False
            break
        current -= k
    if flag:
        print("YES")