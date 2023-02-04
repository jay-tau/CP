for testcase in range(int(input())):
    a = input().split()
    b = input().split()
    if a.count("1") == b.count("1"):
        print("Pass")
    else:
        print("Fail")
