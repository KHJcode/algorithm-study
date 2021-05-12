a, b = map(int, input().split())
_min = min(a, b)

while a % _min != 0 or b % _min != 0:  _min -= 1

print(f'{_min}\n{a * b // _min}')
