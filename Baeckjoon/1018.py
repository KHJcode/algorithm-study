n,m = map(int,input().split())
chess = [input() for _ in range(n)]
min_n = 64

for i in range(n-7):
  for j in range(m-7):
    cnt1= cnt2= 0
    st = chess[i][j]
    for k in range(i,i+8):
      for s in range(j,j+8):
        if k%2==s%2 and chess[k][s]!=st:  cnt1+=1
        elif k%2!=s%2 and chess[k][s]==st:  cnt1+=1
        elif k%2==s%2 and chess[k][s]==st:  cnt2+=1
        else:  cnt2+=1
    min_n = min(cnt1,cnt2,min_n)

print(min_n)
