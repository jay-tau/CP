def solve():
    input()
    s = input() + input()[::-1]
    count = 0
    for i in range(len(s) - 1):
        if s[i] == s[i + 1]:
            count += 1
        if count > 1:
            break
    if count > 1:
        print("NO")
    else:
        print("YES")


for _ in range(int(input())):
    solve()
