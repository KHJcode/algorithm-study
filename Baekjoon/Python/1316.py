now = []
n = int(input())
for v in range(n):
      string = input()
      for i in range(1,len(string)):
            if string.find(string[i-1]) > string.find(string[i]):
                  n -= 1
                  break
                  
print(n)
                  
