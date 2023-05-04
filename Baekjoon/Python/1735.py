import sys
input = sys.stdin.readline

def gcd(a, b):
    return gcd(b, a % b) if b else a

ac, ap = map(int, input().split())
bc, bp = map(int, input().split())
lcm = ap * bp // gcd(ap, bp)
nc = lcm // ap * ac + lcm // bp * bc
ngcd = gcd(nc, lcm)
print(nc // ngcd, lcm // ngcd)
