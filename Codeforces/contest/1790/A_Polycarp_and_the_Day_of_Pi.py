import math

pi = "31415926535897932384626433832795028841971693993751"


def solve():
    s = input()
    n = len(s)
    ans = 0
    for i in range(n):
        if s[i] == pi[i]:
            ans += 1
        else:
            break
    print(min(ans, 30))


for _ in range(int(input())):
    solve()
