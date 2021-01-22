alphabet = 'abcdefghijklmnopqrstuvwxyz'
n = input()
value = ''

for i in str(alphabet):
      value += str(n.find(i)) + ' '
      
print(value)

#print(*map(input().find,map(chr, range(97,123))),sep=" ")
