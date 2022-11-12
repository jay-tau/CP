for _ in range(int(input())):
    n = int(input())
    ans = 0
    if n % 2 == 0:
        k = n // 2
        ans = int((k * (k + 1)) ** (0.5))
    else:
        k = (n - 1) // 2
        ans = int((k * (k + 1)) ** (0.5)) + 1
    print(ans)
