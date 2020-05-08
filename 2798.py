n,m = map(int, input().split())
cards = list(map(int, input().split()))
black = 0
for i in range(0, n-2):
    for j in range(i+1, n-1):
        for v in range(j+1, n):
            if cards[i]+cards[j]+cards[v] > m:
                continue
            black = max(black, cards[i]+cards[j]+cards[v])
print(black)