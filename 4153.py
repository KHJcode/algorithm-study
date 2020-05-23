while 1:
    a,b,c = map(int,input().split())
    if a+b+c==0:   break
    a*=a;b*=b;c*=c
    if a+b==c or a+c==b or c+b==a:    print('right')
    else:   print('wrong')
