for _ in range(int(input())):
    x = int(input())
    l = list(map(int, input().split()))
    if l[x-1] == 0:
        print("NO")
    elif l[l[x-1] - 1] == 0:
        print("NO")
    else:
        print("YES")