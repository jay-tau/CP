s = input()
ans = ''
for char in s:
	if char in 'aeiouyAEIOUY':
		continue
	else:
		ans += '.' + char.lower()

print(ans)