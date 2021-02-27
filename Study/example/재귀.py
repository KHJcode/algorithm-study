def getSumArray(arr, res = 0):
  if len(arr) == 0:  return res
  return getSumArray(arr, res + arr.pop())

data = [7, 3, 2, 9]

result = getSumArray(data)
print(result)

# 재귀는 탈출 조건이 필요한지를 확인해야 합니다.