N,A,B= eval("map(int,input().split()),"*3)
print(sum(a*b for a,b in zip(sorted(A, reverse=True),sorted(B))))