for _ in range(int(input())):
    n = int(input())
    s = input()
    d = {}
    for c in s:
        if c not in d:
            d[c] = 1
        else:
            d[c] += 1
    sum = 0
    for value in d.values():
        sum += 1
        sum += value
    print(sum)