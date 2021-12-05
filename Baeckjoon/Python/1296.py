key = input()
n = int(input())
teams = sorted([input() for _ in range(n)])
score = []

_l = key.count('L')
_o = key.count('O')
_v = key.count('V')
_e = key.count('E')

for s in teams:
  l = s.count('L') + _l
  o = s.count('O') + _o
  v = s.count('V') + _v
  e = s.count('E') + _e
  score.append(((l+o) * (l+v) * (l+e) * (o+v) * (o+e) * (v+e)) % 100)

print(teams[0] if min(score) == max(score) else teams[score.index(max(score))])
