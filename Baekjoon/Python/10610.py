n = input()
cnt = 0
sm = 0
for c in n:
    if c == '0':
        cnt += 1
    sm += int(c)
print(''.join(sorted(' '.join(n).split(), reverse = True)) if sm % 3 == 0 and cnt > 0 else -1)
