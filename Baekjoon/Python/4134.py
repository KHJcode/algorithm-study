import sys
input = sys.stdin.readline

def is_prime_number(x):
    for i in range(2, int(x ** 0.5) + 1):
        if x % i == 0:
            break
    else:
        return True
    return False

n = int(input())
for _ in range(n):
    x = int(input())
    if x < 2:
        print(2)
        continue
    for i in range(x, x * 2 + 1):
        if is_prime_number(i):
            print(i)
            break
