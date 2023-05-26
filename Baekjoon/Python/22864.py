a, b, c, m = map(int, input().split())
if a > m:
    print(0)
else:
    st = 0
    tk = 0
    for _ in range(24):
        if a + st > m:
            st = max(0, st - c)
        else:
            st += a
            tk += b
    print(tk)
