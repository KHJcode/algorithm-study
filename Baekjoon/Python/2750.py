import sys

def bubbleSort(array):
  for i in range(len(array) - 1):
    for j in range(i + 1, len(array)):
      if array[i] > array[j]:  array[i], array[j] = array[j], array[i]
  return array

n = int(sys.stdin.readline())
numbers = [int(sys.stdin.readline()) for _ in range(n)]

result = bubbleSort(numbers)
for i in result:  print(i)