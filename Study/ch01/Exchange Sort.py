def exchangeSort(array):
  n = len(array)
  
  for i in range(n - 1):
    for j in range(i + 1, n):
      if array[i] > array[j]:  array[i], array[j] = array[j], array[i]
  
  return array
