n, m = map(int, input().split())
arr = list(range(n))

for _ in range(m):
    i, j, k = map(int, input().split())
    i -= 1
    j -= 1
    k -= 1
    arr = arr[:i] + arr[k:j + 1] + arr[i:k] + arr[j + 1:]

for i in arr:
    print(i + 1, end=' ')
