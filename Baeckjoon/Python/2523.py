N = int(input())
for i in range (1,2*N,1):
      if i > N:
            print('*'*(2*N-i))
      else:
            print('*'*i)
            
