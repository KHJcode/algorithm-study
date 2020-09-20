def bubbleSort(array):
  for i in range(len(array) - 1):
    for j in range(i + 1, len(array)):
      if array[i] > array[j]:  array[i], array[j] = array[j], array[i]
  return array

numbers = [7, 3, 2, 9, 1, 14, 43, 21, 1, 23, 3, 23, 1, 9]

result = bubbleSort(numbers)
print(result)