def solve():
    n = int(input())
    s = input()
    l_ptr = 0
    r_ptr = n - 1
    ans = n
    while l_ptr <= r_ptr:
        if int(s[l_ptr]) ^ int(s[r_ptr]) == 1:
            ans -= 2
            l_ptr += 1
            r_ptr -= 1
        else:
            break
    print(ans)


for _ in range(int(input())):
    solve()
