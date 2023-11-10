import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
if n == 1:
    print(arr[0])
else:
    arr.sort()
    print(arr[n // 2 - 1 * int(n % 2 == 0)])
