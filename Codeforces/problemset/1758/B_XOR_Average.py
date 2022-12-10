for _ in range(int(input())):
    n = int(input())
    # If n is odd, then XOR 1 n-times to get 1
    if n % 2 != 0:
        print("1 " * n)
    # If n is even, use 1^3=2, and then use 2 (n-2) times
    else:
        print("1 3", end=" ")
        for i in range(n - 2):
            print("2", end=" ")
        print()
