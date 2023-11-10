import sys
input = sys.stdin.readline

n, k = map(int, input().split())
kids = list(map(int, input().split()))
if n == k:
    print(0)
else:
    arr = [kids[i] - kids[i - 1] for i in range(1, n)]
    arr.sort()
    print(sum(arr[:n - k]))
