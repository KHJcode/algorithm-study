import sys
input = sys.stdin.readline

n, m = map(int, input().split())
dna = [input() for _ in range(n)]
ans = ''
cnt = 0

for i in range(m):
    mp = {}
    for j in range(n):
        if dna[j][i] in mp:
            mp[dna[j][i]] += 1
        else:
            mp[dna[j][i]] = 1
    mxc = dna[0][i]
    for k in mp.keys():
        if mp[k] > mp[mxc] or (mp[k] >= mp[mxc] and k < mxc):
            mxc = k
    cnt += n - mp[mxc]
    ans += mxc
print(ans)
print(cnt)
