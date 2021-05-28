n = int(input())
count = list(map(int, input().split())).count(n)
if count == -1:    count = 0
print(count)