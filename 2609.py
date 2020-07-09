a,b = map(int,input().split());m_=a*b

while b!=0:
  a%=b
  a,b=b,a

print(a)
print(m_//a)