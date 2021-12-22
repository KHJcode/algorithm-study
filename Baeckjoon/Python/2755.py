import sys

def customRound(n):
  _n = format(n, '.3f')
  s = int(_n[-1])
  if s >= 5:  _n = _n[:-2] + str(int(_n[-2]) + 1)
  else:  _n = _n[:-1]
  return _n

n = int(input())
score = {
  'A+': 4.3,
  'A0': 4.0,
  'A-': 3.7,
  'B+': 3.3,
  'B0': 3.0,
  'B-': 2.7,
  'C+': 2.3,
  'C0': 2.0,
  'C-': 1.7,
  'D+': 1.3,
  'D0': 1.0,
  'D-': 0.7,
  'F': 0.0,
}
_sum = 0
_sco = 0

for _ in range(n):
  a, b, c = map(str, sys.stdin.readline().split())
  _sum += score[c] * int(b)
  _sco += int(b)

print(customRound(_sum / _sco))
