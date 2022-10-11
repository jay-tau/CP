for _ in range(int(input())):
    n, m = map(int, input().split())
    ans = 'B'*m
    d = {}
    a = map(int, input().split())
    for i in a:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1
    used_indices = []
    for key in d:
        count_of_key = d[key]
        if count_of_key > 1:
            index = key-1
            ans = ans[:index] + 'A' + ans[index+1:]
            index = (m+1-key)-1
            ans = ans[:index] + 'A' + ans[index+1:]
        elif count_of_key == 1:
            index = min(key-1, (m+1-key)-1)
            if index in used_indices:
                index = max(key-1, (m+1-key)-1)
            ans = ans[:index] + 'A' + ans[index+1:]
            used_indices.append(index)
        # print(ans)
    print(ans)