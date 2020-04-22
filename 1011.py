n=int(input())

for i in range(n):
    x, y = map(int,input().split())
    meeter=y-x 
    sub=1
    count =0
    while(meeter>0):
        meeter-=sub
        count+=1
        if count%2==0:
            sub+=1
    print(count)
