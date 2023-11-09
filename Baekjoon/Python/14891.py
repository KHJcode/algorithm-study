from collections import deque
UNIT = 4

machines = [deque(list(map(int, [*input()]))) for _ in range(UNIT)]
k = int(input())
val = []

def clear():
    global val
    val = [2] * UNIT

def simulate(n, d):
    if val[n] != 2:
        return
    val[n] = d
    if 0 <= n - 1:
        if machines[n - 1][2] == machines[n][6]:
            val[n - 1] = 0
        else:
            simulate(n - 1, -d)
    if n + 1 < UNIT:
        if machines[n][2] == machines[n + 1][6]:
            val[n + 1] = 0
        else:
            simulate(n + 1, -d)

for _ in range(k):
    n, d = map(int, input().split())
    clear()
    simulate(n - 1, d)
    for i, v in enumerate(val):
        if v != 2:
            machines[i].rotate(v)

print(machines[0][0] + machines[1][0] * 2 + machines[2][0] * 4 + machines[3][0] * 8)
