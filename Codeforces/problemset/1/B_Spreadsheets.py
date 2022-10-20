def firstDigitIndex(s):
	index = -1
	for i in range(len(s)):
		if ((s[i]).isdigit()):
			index = i
			break
	return index

def base26ToBase10(base26):
	base10 = 0
	for i in range(len(base26)):
		base10 += (ord(base26[i]) - 64) * (26 ** (len(base26) - i - 1))
	return base10

def base10ToBase26(base10):
	base26 = ""
	while (base10 > 0):
		base26 = chr((base10 - 1) % 26 + 65) + base26
		base10 = (base10 - 1) // 26
	return base26

for _ in range(int(input())):
	s = input()
	if s[0] == 'R' and s[1].isdigit() and 'C' in s:
		# R23C55 format
		c_index = s.find('C')
		r = int(s[1:c_index])
		c = int(s[(c_index + 1):])
		print(base10ToBase26(c) + str(r))
	else:
		# Letters in base 26 + integer
		int_start_index = firstDigitIndex(s)
		base_26_column = s[:int_start_index]
		row = s[int_start_index:]
		base_10_column = base26ToBase10(base_26_column)
		print('R' + row + 'C' + str(base_10_column))