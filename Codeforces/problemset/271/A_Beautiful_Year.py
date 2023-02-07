from locale import currency


n = int(input())

for i in range(n + 1, 9999 + 1):
    current_year = str(i)
    if len(current_year) == len(set(current_year)):
        print(i)
        break
