def prime(nx):
      num = 0
      sieve = [True] * nx
      root = int(nx ** 0.5)
      for i in range(2,root+1):
            if sieve[i] == True:
                  for j in range(i+i, nx, i):   sieve[j] = False
      for v in range(len(sieve)):
            if sieve[v] == True and v > n:      num += 1
      return num

while True:
      n = int(input())
      if n==0:    break
      print(prime(n*2+1))
