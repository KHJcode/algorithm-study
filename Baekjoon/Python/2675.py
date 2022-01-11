n = int(input())

for i in range(n):
    string = ''
    a,b = input().split(' ')
    for j in b:
        string += int(a)*j
    print(string)


