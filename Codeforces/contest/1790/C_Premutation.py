def solve():
    n = int(input())
    l = []
    for i in range(n):
        l.append(input().split())
    if l[0][0] == l[1][0]:
        first_element = l[0][0]
    else:
        first_element = l[2][0]
    if l[0][n - 2] == l[1][n - 2]:
        last_element = l[0][n - 2]
    else:
        last_element = l[2][n - 2]
    # print("first_element", first_element)
    # print("last_element", last_element)
    for row in l:
        if row[0] == first_element and row[n - 2] != last_element:
            print(" ".join(row), end=" ")
            print(last_element)


for _ in range(int(input())):
    solve()
