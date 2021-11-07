import sys

col = int(sys.stdin.readline())
string = sys.stdin.readline()
row = len(string) // col
new_string = ''

for i in range(row):
  _range = range(col) if i % 2 == 0 else range(col - 1, -1, -1)
  for j in _range:
    new_string += string[col * i + j]

string = ''

for i in range(col):
  for j in range(row):
    string += new_string[col * j + i]

print(string)
