s = input()

all_upper_case = True
all_but_first_upper_case = True

if s[0].islower():
    all_upper_case = False
    for i in range(1, len(s)):
        if not s[i].isupper():
            all_but_first_upper_case = False
            break
else:
    all_but_first_upper_case = False
    for char in s:
        if not char.isupper():
            all_upper_case = False
            break

if all_upper_case or all_but_first_upper_case:
    print(s.swapcase())
else:
    print(s)
