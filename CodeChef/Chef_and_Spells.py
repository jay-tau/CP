for testcase in range(int(input())):
    l = list(map(int, input().split()))
    l.remove(min(l))
    print(sum(l))