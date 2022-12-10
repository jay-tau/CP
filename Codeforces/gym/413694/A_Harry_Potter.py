d = {}
for _ in range(int(input())):
    s = input()
    if s in d:
        print("YES")
    else:
        print("NO")
        d[s] = 0
