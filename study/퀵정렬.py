def quickSort(array):
  if len(array) < 2:  return array
  pivot = array[0]
  less = [number for number in array[1:] if number <= pivot]
  greater = [number for number in array[1:] if number > pivot]
  result = quickSort(less) + [pivot] + quickSort(greater)
  return result

array_set1 = [40, 35, 27, 50, 75, 50, 27, 1, 4324, 2424, 1213, 3]

result = quickSort(array_set1)
print(result)