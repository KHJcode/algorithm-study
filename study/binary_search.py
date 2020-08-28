def binarySearch(array, target):
  mideIndex = len(array) // 2
  indexValue = array[mideIndex]
  return (mideIndex, indexValue)


data = [1,2,3,4,5,6,25,24,66,1233,342,10,0,3,13,34,4324]

result = binarySearch(data, 13)
print(result)