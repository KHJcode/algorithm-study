n = int(input())
count = room = 1
plus = 0
while n != 1:
      plus += 6
      room += 1
      count += plus
      if n <= count:
            n = room
            break
print(n)
