def getHighFrequencyLetterCount(word):
  obj = {}
  for c in word:
    if obj.get(c) == None:  obj[c] = 0
    obj[c] += 1
  _keys = list(obj.keys())
  _max = obj[_keys[0]]
  for i in _keys[1:]:
    if _max < obj[i]:  _max = obj[i]
  return _max

data = 'developer'

result = getHighFrequencyLetterCount(data)
print(result)