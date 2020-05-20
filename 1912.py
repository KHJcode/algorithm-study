n = int(input());num = list(map(int,input().split()))
index = [num[0]]
for i in range(n-1):    index.append(max(index[i]+num[i+1],num[i+1]))
print(max(index))