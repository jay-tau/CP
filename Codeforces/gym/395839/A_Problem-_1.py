for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    zero_count = a.count(0)
    one_count = a.count(1)
    if zero_count == 0:
        print(one_count)
    else:
        print((2**zero_count) * (one_count))
