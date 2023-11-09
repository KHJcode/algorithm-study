from collections import deque
import sys
input = sys.stdin.readline

n = int(input())
dq = deque()
for _ in range(n):
    inp = list(map(int, input().split()))
    x = inp[0]
    if x == 1:
        dq.appendleft(inp[1])
    elif x == 2:
        dq.append(inp[1])
    elif x == 3:
        print(dq.popleft() if len(dq) > 0 else -1)
    elif x == 4:
        print(dq.pop() if len(dq) > 0 else -1)
    elif x == 5:
        print(len(dq))
    elif x == 6:
        print(int(len(dq) == 0))
    elif x == 7:
        print(dq[0] if len(dq) > 0 else -1)
    else:
        print(dq[len(dq) - 1] if len(dq) > 0 else -1)
