s = input()
l = list("hello")

for char in s:
    if char == l[0]:
        l.pop(0)
        if not l:  # if l is empty
            break

if not l:  # if l is empty
    print("YES")
else:
    print("NO")
