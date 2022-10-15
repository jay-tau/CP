for _ in range(int(input())):
	n = int(input())
	if n == 3:
		print(-1)
		continue
	elif n == 2:
		print('2 1')
	elif n % 2 == 0:
		print((n - 1), n, *range(n-2, 0, -1))
	else:
		print(n, (n - 1), *range(1, n-1))