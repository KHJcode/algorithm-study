peoples = [0]
for i in range(1,5):
    a,b = map(int, input().split())
    peoples.append(peoples[i-1]+(b-a))
print(max(peoples))