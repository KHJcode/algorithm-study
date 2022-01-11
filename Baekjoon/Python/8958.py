n = int(input())

for i in range (n):
      obj = list(input())
      add = tp = 0
      for i in obj:
            if i == 'O':
                  tp += 1
                  add += tp
            else:
                  tp = 0
      print(add)
