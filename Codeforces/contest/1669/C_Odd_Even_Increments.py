for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    odd = []
    even = []
    for i in range(n):
        if i % 2 == 1:
            odd.append(l[i] % 2)
        else:
            even.append(l[i] % 2)
    # print(odd); print(even)
    s_odd = sum(odd)
    s_even = sum(even)
    if (s_odd == 0 or s_odd == len(odd)) and ((s_even == 0 or s_even == len(even))):
        print("YES")
    else:
        print("NO")
