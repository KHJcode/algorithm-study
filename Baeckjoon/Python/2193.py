cnt = [0,1,1]
n = int(input())
for i in range(3,n+1):  cnt.append(cnt[i-2]+cnt[i-1])
print(cnt[n])