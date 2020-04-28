# 에라토스테네스의 체
def prime(v):
    if v == 1:  return False
    root = int(v ** 0.5)
    for i in range(2, root+1):
        if v%i == 0:
            return False
    return True

M, N = map(int, input().split())
for v in range(M,N+1):
    if prime(v) == True:
        print(v)