case = int(input())
for j in range(case):
    n, m = map(int,input().split())
    imp = list(map(int,input().split()))
    queue = [0 for i in range(n)]
    queue[m] = 1
    count = 0
    while True:
        if imp[0] == max(imp):
            count += 1
            if queue[0] == 1:
                print(count)
                break
            else:
                del imp[0]
                del queue[0]
        else:
            imp.append(imp.pop(0))
            queue.append(queue.pop(0))