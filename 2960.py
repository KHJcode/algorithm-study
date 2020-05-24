n, k = map(int,input().split())
cnt = 0
prime = [True]*(n+1)
for i in range(2,n+1,1):
    if prime[i] == False:    continue
    for j in range(i,n+1,i):
        if prime[j] == True:    prime[j] = False;cnt+=1
        if cnt == k:    print(j);break