n = 1000-int(input())
money = [500,100,50,10,5,1]
coin = 0
for i in money:
    coin += n//i
    n %= i
print(coin)
