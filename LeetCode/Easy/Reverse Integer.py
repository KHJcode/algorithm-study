def reverse(self, x):
    _x = int(str(x)[::-1] if 0 <= x else '-' + str(x)[1:][::-1])
    return _x if -2**31 < _x < 2**31-1 else 0
