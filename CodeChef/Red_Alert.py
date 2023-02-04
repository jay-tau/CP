for testcase in range(int(input())):
    n, d, h = map(int, input().split())
    l = map(int, input().split())
    current_height = 0
    red_alert = "NO"
    for i in l:
        current_height += i
        if i == 0:
            current_height -= d
            if current_height < 0:
                current_height = 0
        if current_height > h:
            red_alert = "YES"
            break
    print(red_alert)
