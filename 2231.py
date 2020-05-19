n = int(input())
for i in range(n+1):
    if (i+sum(list(map(int, str(i))))) == n:    print(i);break;
    elif i == n:    print(0)