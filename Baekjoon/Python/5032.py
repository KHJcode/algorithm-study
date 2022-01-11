e,f,c = map(int,input().split())
bottle = (e+f)//c
get = (e+f)%c + bottle

while 1:
  if get < c:  break
  bottle += get//c
  get = get//c + get%c
  
print(bottle)