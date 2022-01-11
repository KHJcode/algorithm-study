def d(n):
  num = 0
  for i in str(n):  num += int(i)
  return n + num

def getSelfNumber():
  notSelfNumber = []
  for i in range(0, 10001):  notSelfNumber.append(d(i))
  for j in range(0, 10001):
    if j in notSelfNumber:  continue
    print(j)

getSelfNumber()
