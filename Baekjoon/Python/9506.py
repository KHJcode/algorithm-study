n = int(input())
while n != -1:
    numbers = []
    for i in range(1, n // 2 + 1):
        if n % i == 0:
            numbers.append(i)
    print(n, end=' ')
    if sum(numbers) == n:
        print(f'= {numbers[0]} ', end='')
        for i in range(1, len(numbers)):
            print(f'+ {numbers[i]}', end=' ')
        print()
    else:
        print('is NOT perfect.')
    n = int(input())
