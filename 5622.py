string = ['ABC','DEF','GHI','JKL','MNO','PQRS','TUV','WXYZ']
time = 0
number = input()

for i in range(len(number)):
      for j in string:
            if number[i] in j:
                  time += string.index(j) + 3
                
print(time)
