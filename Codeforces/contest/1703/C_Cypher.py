for _ in range(int(input())):
    n = int(input())
    final_sequence = list(map(int, input().split()))

    for i in range(n):
        temp = input().split()
        final_number = int(temp[0])
        moves = temp[1]
        net_move = 0
        for move in moves:
            if move == "U":
                net_move += 1
            else:
                net_move -= 1
        print(((final_sequence[i] - net_move) % 10), end=" ")
    print()
