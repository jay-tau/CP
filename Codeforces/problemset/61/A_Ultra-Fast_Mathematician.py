a = '0b' + input()
b = '0b' + input()

n = len(a)
xored_string = bin(int(a, 2) ^ int(b, 2))[2:]
xored_string = '0' * (n - len(xored_string)-2) + xored_string

print(xored_string)