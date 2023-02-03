def solve():
    n = int(input())
    s = input()
    pos = (0, 0)
    goal = (1, 1)
    for char in s:
        if pos[0] == 1 and pos[1] == 1:
            print("YES")
            return
        if char == "U":
            pos = (pos[0], pos[1] + 1)
        elif char == "D":
            pos = (pos[0], pos[1] - 1)
        elif char == "R":
            pos = (pos[0] + 1, pos[1])
        elif char == "L":
            pos = (pos[0] - 1, pos[1])
    if pos[0] == 1 and pos[1] == 1:
        print("YES")
        return
    print("NO")


for _ in range(int(input())):
    solve()
