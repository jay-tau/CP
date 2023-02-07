n, l = map(int, input().split())
a = list(map(int, input().split()))

a.sort()

a_min = min(a)
a_max = max(a)

if n == 1:
    print(max(a_min, l - a_max))
elif min(a) == 0 and max(a) == l:
    print(max([a[i + 1] - a[i] for i in range(n - 1)]) / 2)
elif min(a) == 0:
    print(max((l - a_max), max([a[i + 1] - a[i] for i in range(n - 1)]) / 2))
elif max(a) == l:
    print(max((a_min), max([a[i + 1] - a[i] for i in range(n - 1)]) / 2))
else:
    print(max(a_min), (l - a_max), max([a[i + 1] - a[i] for i in range(n - 1)]) / 2)
