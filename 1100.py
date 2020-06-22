in_put = [input() for _ in range(8)]
horse = 0

for i,x in enumerate(in_put):
  for j,v in enumerate(x):
    if i%2==j%2 and v=='F':  horse+=1

print(horse)