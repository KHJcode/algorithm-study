a, b, v = map(int, input().split())
score = (v - b) // (a - b)
print(score if (v - b) % (a - b) == 0 else score + 1)
