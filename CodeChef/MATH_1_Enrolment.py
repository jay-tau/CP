for _ in range(int(input())):
    x, y = map(int, input().split())
    if y >= x:
        print(y-x)
    else:
        print(0)