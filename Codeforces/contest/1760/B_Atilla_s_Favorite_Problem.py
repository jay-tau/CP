for _ in range(int(input())):
    n = int(input())
    s = input()
    ans = 0
    for char in s:
        pos = ord(char) - ord("a")
        ans = max(ans, pos)
    print(ans + 1)
