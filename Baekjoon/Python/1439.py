s = input()
n = s[0]
l = 0
o = 0
def apply():
    global o, l
    if n == '1':
        l += 1
    else:
        o += 1
apply()
for c in s[1:]:
    if n != c:
        apply()
        n = c
apply()
print(min(o, l))
