n, m = map(int,input().split())
cards = list(map(int,input().split()))
blackjack = 0

for i in range(0,n-2):
  for j in range(i+1,n-1):
    for v in range(j+1,n):
      sum_cards = cards[i]+cards[j]+cards[v]
      if sum_cards > m:  continue
      blackjack = max(blackjack, sum_cards)

print(blackjack)