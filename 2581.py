M = int(input())
N = int(input())+1
numbers = []
for i in range(M,N):
    c = 0
    for j in range(1,i+1):
        if i%j == 0:
            c += 1
        if c > 2:
            break
    if c == 2:
        numbers.append(i)
if sum(numbers) == 0:
    print(-1)
else:
    print(sum(numbers),min(numbers),sep='\n')