import sys
import copy
input = sys.stdin.readline

DX = [0, 1, 0, -1]
DY = [-1, 0, 1, 0]
MOVE = [
    [[0], [1], [2], [3]],
    [[0, 2], [1, 3]],
    [[0, 1], [1, 2], [2, 3], [3, 0]],
    [[0, 1, 2], [1, 2, 3], [2, 3, 0], [3, 0, 1]],
    [[0, 1, 2, 3]],
]

n, m = map(int, input().split())
arr = []
cctv = []
answer = n * m + 1
for y in range(n):
    sub_arr = list(map(int, input().split()))
    arr.append(sub_arr)
    for x in range(m):
        if arr[y][x] not in [0, 6]:
            cctv.append((y, x))

def watch(dir, y, x):
    if not (x >= 0 and x < m and y >= 0 and y < n) or arr[y][x] == 6:
        return
    elif arr[y][x] == 0:
        arr[y][x] = 7
    watch(dir, y + DY[dir], x + DX[dir])

def get_score():
    score = 0
    for y in range(n):
        for x in range(m):
            score += int(arr[y][x] == 0)
    return score

def decide(idx):
    if idx == len(cctv):
        global answer
        answer = min(answer, get_score())
        return
    y, x = cctv[idx]
    global arr
    id = arr[y][x] - 1
    for dirs in MOVE[id]:
        capture = copy.deepcopy(arr)
        for dir in dirs:
            watch(dir, y, x)
        decide(idx + 1)
        arr = capture

decide(0)
print(answer)
