a,b,c = map(int,input().split(' '))
BREAK_EVEN_POINT = 0

if b < c:
      BREAK_EVEN_POINT = int((a/(c-b))+1)
else:
      BREAK_EVEN_POINT = -1
      
print(BREAK_EVEN_POINT)
