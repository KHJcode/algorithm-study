string = input()
croatia = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

for j in croatia:
      string= string.replace(j,'*')

print(len(string))
