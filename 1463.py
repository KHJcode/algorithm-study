N = int(input())
values = [0,0,1,1]

for i in range(4, N+1):
    values.append(values[i-1]+1);
    if i%2 == 0:
        values[i] = min(values[i], values[i//2]+1)
    if i%3 == 0:
        values[i] = min(values[i], values[i//3]+1)
print(values[N])