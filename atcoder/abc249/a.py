a, b, c, d, e, f, x = map(int, input().split())

def cal(sec, m, rest):
    num = x // (sec + rest)
    r = x % (sec + rest)
    s = num * sec + min(r, sec)
    return s * m

takahashi = cal(a, b, c)
aoki = cal(d, e, f)

if takahashi > aoki:
    print("Takahashi")
elif takahashi < aoki:
    print("Aoki")
else:
    print("Draw")
