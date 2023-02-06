# Multiple correct outputs for the same input

from collections import Counter

for _ in range(int(input())):
    (input())
    l = list(input().split())
    count = Counter(l)
    req = [k for k, v in count.items() if int(v) >= 3]
    try:
        print(req[0])
    except:
        print(-1)
