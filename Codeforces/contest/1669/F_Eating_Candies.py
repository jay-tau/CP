for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    count = 0
    front_pointer = l[0]; back_pointer = l[-1]
    front_index = 0; back_index = len(l) - 1

    while front_index < back_index:
        if front_pointer == back_pointer:
            count = (front_index + 1); count += (len(l) - back_index)
            front_index += 1; back_index -= 1
            front_pointer += l[front_index]; back_pointer += l[back_index]
        elif front_pointer < back_pointer:
            front_index += 1
            front_pointer += l[front_index]
        elif front_pointer > back_pointer:
            back_index -= 1
            back_pointer += l[back_index]
    print(count)