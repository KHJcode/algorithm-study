string = [[0]*15 for _ in range(5)]
for i in range(5):
    newStr = list(input())
    for j in range(len(newStr)):    string[i][j] = newStr[j]
for i in range(15):
    for j in range(5):    
        if string[j][i] == 0:    continue
        print(string[j][i], end='')