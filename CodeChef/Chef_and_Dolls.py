for _ in range(int(input())):
    n = int(input())
    dolls = []
    for i in range(n):
        dolls.append(int(input()))
    for doll in set(dolls):
        if dolls.count(doll) % 2 != 0:
            print(doll)
            break
