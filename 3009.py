xloc=[];yloc=[];new=''
for _ in range(3):
  x,y=map(int,input().split())
  xloc.append(x);yloc.append(y)

for i in xloc:
  if xloc.count(i)%2 != 0:  new+=str(i)
for j in yloc:
  if yloc.count(j)%2 != 0:  new+=' %d'%j

print(new)