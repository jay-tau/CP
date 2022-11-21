for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    maximum = a[0]
    max_index = 0
    for i in range(n):
        if a[i] > maximum:
            maximum = a[i]
            max_index = i
    a.pop(max_index)
    max_2 = max(a)
    a.insert(max_index, maximum)
    # print(a)
    for i in range(n):
        if a[i] == maximum:
            print((a[i] - max_2), end=" ")
        else:
            print((a[i] - maximum), end=" ")
    print()
