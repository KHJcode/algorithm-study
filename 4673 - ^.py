self_number = set(range(1,10000))
con_number = set()

for i in self_number:
    for j in str(i):
        i += int(j)
    con_number.add(i)

for v in sorted(self_number-con_number):
    print(v)
