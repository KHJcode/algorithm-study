def sequentialSearch(n, array, x):
  if x >= n:  return None

  location = 0
  while (location < n and array[location] != x):  location += 1
  
  return location
