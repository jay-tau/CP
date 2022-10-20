def solve():
	n, m = map(int, input().split())
	a = [[0 for j in range(n)] for i in range(n)]
	for __ in range(m):
		x, y = map(int, input().split())
		x -= 1; y -=1
		a[x][y] += 1
		for x_i in range(n):
			a[x_i][y] += 1
		for y_i in range(n):
			a[x][y_i] += 1

	for i in range(n):
		max_element = max(a[i])
		min_element = min(a[i])
		if (max_element > 1) and (min_element <= 1):
			print("YES")
			return
	for j in range(n):
		max_element = max([a[i][j] for i in range(n)])
		min_element = min([a[i][j] for i in range(n)])
		if (max_element > 1) and (min_element <= 1):
			print("YES")
			return
	print("NO")

for _ in range(int(input())):
	solve()