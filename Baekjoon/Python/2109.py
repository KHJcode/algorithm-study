import sys
input = sys.stdin.readline

que = []
last = 0
score = 0
arr = [[] for _ in range(10000)]
n = int(input())
for _ in range(n):
    w, d = map(int, input().split())
    arr[d - 1].append(w)
    last = max(last, d)
for d in range(last - 1, -1, -1):
    for w in arr[d]:
        que.append(w)
    if len(arr[d]) > 0:
        que.sort()
    if len(que) > 0:
        score += que.pop()
print(score)
