l, p = map(int, input().split())
numbers = list(map(int, input().split()))
width = l * p

for n in numbers:  print(n - width, end=' ')
