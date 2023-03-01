parent_string = (
    "FBFFBFFB" + "FBFFBFFB" + "F"
)  # Max length of string is 10. Worst case is starting from last

for _ in range(int(input())):
    input()
    s = input()
    if s in parent_string:
        print("YES")
    else:
        print("NO")
