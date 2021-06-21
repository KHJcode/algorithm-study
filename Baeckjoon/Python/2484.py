def get(arr): 
  _arr = sorted(arr)
  if _arr[0] == _arr[3]:  return 50000 + _arr[0] * 5000
  if _arr[0] == _arr[1] and _arr[2] == _arr[3]:  return 2000 + _arr[0] * 500 + _arr[2] * 500
  if arr.count(_arr[3]) == 3 or arr.count(_arr[0]) == 3:  return 10000 + _arr[1] * 1000
  if arr.count(_arr[1]) == 2 or arr.count(_arr[2]) == 2:
    return 1000 + (_arr[2] if arr.count(_arr[2]) == 2 else _arr[1]) * 100
  return _arr[3] * 100

n = int(input())
_input = [list(map(int, input().split())) for _ in range(n)]
reward = []

for arr in _input:  reward.append(get(arr))

print(max(reward))
