for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    s = set(p)
    possible = True
    for p_i in s:
        if p.count(p_i) % p_i != 0:
            possible = False
            break
    if possible:
        print("YES")
    else:
        print("NO")
