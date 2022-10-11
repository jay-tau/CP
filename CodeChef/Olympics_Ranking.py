for _ in range(int(input())):
    l = list(map(int, input().split()) )
    if sum(l[0:3]) > sum(l[3:6+1]):
        print(1)
    else:
        print(2)