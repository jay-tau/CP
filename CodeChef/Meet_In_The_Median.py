import statistics

for testcase in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    median_max = 0
    i_max = 0
    for i in range(n - k + 1):
        median = statistics.median(a[i : (i + k + 1)])
        if median > median_max:
            median_max = median
            i_max = i
    print(" ".join(map(str, a[i_max : (i_max + k + 1)])))
