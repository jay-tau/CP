for i in range(int(input())):
    s = "codeforces"
    d = {}
    for char in s:
        d[char] = 1
    c = input()
    if c in d:
        print("YES")
    else:
        print("NO")
