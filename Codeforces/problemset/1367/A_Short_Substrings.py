for _ in range(int(input())):
    s = input()
    ans = s[0]
    length = len(s)
    for i in range(1, length, 2):
        ans += s[i]
    print(ans)
