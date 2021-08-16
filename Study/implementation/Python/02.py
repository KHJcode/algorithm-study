n = int(input())
sum = n * 3600 + 3599
count = 0

for i in range(sum + 1):
  hour = str(i // 3600)
  minute = str(i % 3600 // 60)
  second = str(i % 60)
  if '3' in hour + minute + second:
    count += 1

print(count)
