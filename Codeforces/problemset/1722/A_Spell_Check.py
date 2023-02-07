for _ in range(int(input())):
    n = int(input())
    s = input()
    if n != 5:
        print("NO")
        continue

    d_s = {}
    for char_s in s:
        if char_s in d_s:
            d_s[char_s] += 1
        else:
            d_s[char_s] = 1

    d_t = {}
    for char_t in "Timur":
        if char_t in d_t:
            d_t[char_t] += 1
        else:
            d_t[char_t] = 1

    if d_s == d_t:
        print("YES")
    else:
        print("NO")
