import sys

n = int(sys.stdin.readline())
chart = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
student = [0] * n

for i in range(n):
		for j in range(n):
			if i == j:  continue
			for k in range(5):
				if chart[i][k] == chart[j][k]:
					student[j] += 1
					break

print(student.index(max(student)) + 1)
