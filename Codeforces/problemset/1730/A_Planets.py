for _ in range(int(input())):
    n, c = map(int, input().split())
    a = list(map(int, input().split()))
    l = [0 for i in range(1, 101 + 1)]
    for a_i in a:
        l[a_i] += 1
    cost = 0
    for l_i in l:
        cost += min(l_i, c)
    print(cost)
