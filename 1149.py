n = int(input());
colors = []
for i in range(n):  colors.append(list(map(int,input().split())))
for i in range(1,n):
  now_array = colors[i-1]
  colors[i][0] = colors[i][0] + min(now_array[1],now_array[2])
  colors[i][1] = colors[i][1] + min(now_array[0],now_array[2])
  colors[i][2] = colors[i][2] + min(now_array[0],now_array[1])

now = colors[n-1]
print(min(now[0],now[1],now[2]))