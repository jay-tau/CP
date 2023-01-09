def solve():
    n = int(input())
    a = list(range(1, n * n + 1))
    l = []
    l_ptr = 0
    r_ptr = n * n - 1
    while l_ptr <= r_ptr:
        l.extend([a[l_ptr], a[r_ptr]])
        l_ptr += 1
        r_ptr -= 1

    ans = []
    ptr = 0
    for i in range(n):
        temp = []
        for j in range(n):
            temp.append(str(l[ptr]))
            ptr += 1
        if n % 2 == 0 and i % 2 != 0:
            ans.append(temp[::-1])
        else:
            ans.append(temp)

    for i in range(len(ans)):
        print(" ".join(ans[i]))


for _ in range(int(input())):
    solve()
