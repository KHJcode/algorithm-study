height = []
for i in range(9):
      height.append(int(input()))
for j in height:
      if sum(height) == 100:  break
      for v in height:
            if (sum(height)-j)-v == 100 and v != j:
                  height.remove(j)
                  height.remove(v)
                  break
for x in sorted(height):
      print(x)
