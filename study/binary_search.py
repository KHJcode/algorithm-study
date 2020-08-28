def binarySearch(array, target):
  start = 0
  end = len(array)
  while start <= end:
    midIndex = (start + end) // 2
    indexValue = array[midIndex]

    if indexValue == target:  return midIndex
    elif indexValue < target:  start = midIndex + 1
    elif indexValue > target:  end = midIndex - 1
  return -1

data = [1,2,3,4,5,6,25,4324,34234,14,4234,4324]

result = binarySearch(data, 14)
print(result)