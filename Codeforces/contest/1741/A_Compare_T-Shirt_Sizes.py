for _ in range(int(input())):
	a, b = input().split()
	x_a = a.count('X'); x_b = b.count('X')
	if 'L' in a and 'L' in b:
		if x_a > x_b:
			print('>')
		elif x_a < x_b:
			print('<')
		else:
			print('=')
	elif 'L' in a:
		print('>')
	elif a=='M' and 'L' in b:
		print('<')
	elif a == 'M' and b == 'M':
		print('=')
	elif a == 'M' and 'S' in b:
		print('>')
	elif 'S' in a and 'L' in b:
		print('<')
	elif 'S' in a and b == 'M':
		print('<')
	elif 'S' in a and 'S' in b:
		if x_a > x_b:
			print('<')
		elif x_a < x_b:
			print('>')
		else:
			print('=')