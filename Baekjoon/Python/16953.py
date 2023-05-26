a, b = map(int, input().split())
c = 0
while a != b and a < b:
    if b % 10 == 1:
        b = int(str(b)[:-1])
    elif b % 2 == 0:
        b //= 2
    else:
        break
    c += 1
print(c + 1 if a == b else -1)
