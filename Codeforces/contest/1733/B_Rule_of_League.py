for _ in range(int(input())):
	n, x, y = map(int, input().split())
	if min(x, y) != 0:
		print(-1)
		continue
	else:
		non_zero_term = max(x, y)
		if non_zero_term == 0:
			print(-1)
			continue
		elif (n-1)%non_zero_term != 0:
			print(-1)
			continue

		current_winner = 2
		while current_winner < n:
			for counter in range(non_zero_term): # Print current_winner non_zero_term times
				print(current_winner, end=' ')
			current_winner += non_zero_term
		if non_zero_term == 1:
			print(n, end=' ')
		print()