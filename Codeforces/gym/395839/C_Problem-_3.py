from sys import stdout
from statistics import mode

special_numbers = [4, 8, 15, 16, 23, 42]
true_array = [-1 for _ in range(6)]

def special_factor(n):
	if n % 42 == 0:
		return 42
	elif n % 23 == 0:
		return 23
	elif n % 15 == 0:
		return 15
	elif n % 16 == 0:
		return 16
	elif n % 8 == 0:
		return 8
	elif n % 4 == 0:
		return 4

possibilities = [[] for _ in range(6)]
t = 1
while (t <= 4):
	# print("? 1 2")
	print('?', (t), (t + 1))
	stdout.flush()
	product = int(input())
	factor_1 = special_factor(product)
	factor_2 = product//factor_1
	while 1:
		if factor_2 in special_numbers:
			# No issues
			possibilities[t-1].append(factor_1); possibilities[t-1].append(factor_2); possibilities[t].append(factor_2); possibilities[t].append(factor_1)
			break
		else:
			factor_1 //= 2
			factor_2 = product//factor_1
	t += 1
	# print(possibilities)

for i in range(1, 3+1):
	most_freq = mode(possibilities[i])
	true_array[i] = most_freq
	possibilities[i] = most_freq

for possibility in possibilities[0]:
	if possibility in true_array:
		continue
	else:
		true_array[0] = possibility

for possibility in possibilities[4]:
	if possibility in true_array:
		continue
	else:
		true_array[4] = possibility

for possibility in special_numbers:
	if possibility in true_array:
		continue
	else:
		true_array[5] = possibility

print('!', true_array[0], true_array[1], true_array[2], true_array[3], true_array[4], true_array[5])