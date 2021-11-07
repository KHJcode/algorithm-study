import math

d, h, w = map(int, input().split())
f = d / math.sqrt(h * h + w * w)
print(math.floor(f * h), math.floor(f * w))
