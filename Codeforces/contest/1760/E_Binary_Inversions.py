def inversion_count(a):
    # Build prefix of 1 count
    prefix_1_count = [0 for i in range(len(a))]
    prefix_1_count[0] = int(a[0])
    for i in range(1, len(a)):
        prefix_1_count[i] = prefix_1_count[i - 1] + int(a[i])
    # print(prefix_1_count)

    # Count inversions
    count = 0
    for i in range(len(a)):
        if a[i] == "0":
            count += prefix_1_count[i]
    return count


def solve():
    n = int(input())
    l = input().split()

    ans = 0

    # Flip 1st 0
    first_0_index = ("".join(l)).find("0")
    if first_0_index != -1:
        new_list = l.copy()
        new_list[first_0_index] = "1"
        ans = max(ans, inversion_count(new_list))

    # Flip last 1
    last_1_index = ("".join(l)).rfind("1")
    if last_1_index != -1:
        new_list = l.copy()
        new_list[last_1_index] = "0"
        ans = max(ans, inversion_count(new_list))
    ans = max(ans, inversion_count(l))
    print(ans)


for _ in range(int(input())):
    solve()
