x = int(input())
stick = [64]
while sum(stick) > x:
    stick[stick.index(min(stick))] = min(stick)//2
    if sum(stick) < x:
        stick.append(min(stick))
print(len(stick))