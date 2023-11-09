import sys
input = sys.stdin.readline

n, m, y, x, _ = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(n)]
moves = list(map(int, input().split()))
dice = [0] * 6
dx = [1, -1, 0, 0]
dy = [0, 0, -1, 1]

def up():
    dice[0], dice[2], dice[4], dice[5] = dice[5], dice[0], dice[2], dice[4]

def down():
    dice[0], dice[2], dice[4], dice[5] = dice[2], dice[4], dice[5], dice[0]

def right():
    dice[1], dice[2], dice[3], dice[5] = dice[2], dice[3], dice[5], dice[1]

def left():
    dice[1], dice[2], dice[3], dice[5] = dice[5], dice[1], dice[2], dice[3]

sts = [right, left, up, down]

for v in moves:
    nx = x + dx[v - 1]
    ny = y + dy[v - 1]
    if 0 <= nx and nx < m and 0 <= ny and ny < n:
        x, y = nx, ny
        sts[v - 1]()
        if arr[y][x] == 0:
            arr[y][x] = dice[2]
        else:
            dice[2] = arr[y][x]
            arr[y][x] = 0
        print(dice[5])
