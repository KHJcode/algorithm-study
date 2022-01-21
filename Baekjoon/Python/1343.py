s = input()
s = s.replace('XXXX', 'AAAA')
s = s.replace('XX', 'BB')
print(-1 if 'X' in s else s)
