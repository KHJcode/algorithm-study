n = int(input())
data = {}

for _ in range(n):
    user, action = map(str, input().split())
    if action == "enter":
        data[user] = 1
    else:
        del data[user]

for user in sorted(data.keys(), reverse=True):
    print(user)
