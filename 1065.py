n = int(input())
hansu = 0

for i in range (1,n+1):
      numbers = list(map(int, str(i)));
      if i < 100:
            hansu += 1
      elif i> 100 and numbers[0]-numbers[1] == numbers[1]-numbers[2]:
            hansu += 1

print(hansu)
      
            
