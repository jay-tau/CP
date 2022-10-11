for _ in range(int(input())):
	n = int(input())
	s = input()
	reversed_ans = ''
	i = n-1
	while (i >= 0):
	# for i in range(n-1, -1, -1):
		# print(i)
		element = s[i]
		if element != '0':
			reversed_ans += chr(int(element) + 96)
			i -= 1
			# print(reversed_ans)
		else:
			# Read 3 characters
			substring = s[(i-2):(i+1)]
			reversed_ans += chr(int(substring[:-1]) + 96)	# Removes trailing zero from xx0, and returns letter at xx in alphabets
			i -= 3 # Skips to position after xx0
	print(reversed_ans[::-1])