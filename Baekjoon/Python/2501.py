n, k = map(int, input().split())
numbers = []
for i in range(1, n // 2 + 1):
    if n % i == 0:
        numbers.append(i)
numbers.append(n)
print(numbers[k - 1] if len(numbers) >= k else 0)
