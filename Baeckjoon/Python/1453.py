import sys

n = sys.stdin.readline()
person = list(map(int, sys.stdin.readline().split()))
print(len(person) - len(list(set(person))))
