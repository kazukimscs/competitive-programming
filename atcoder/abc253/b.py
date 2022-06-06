h, w = map(int, input().split())
s = [input() for _ in range(h)]

r_diff = []
c_diff = []
for r in range(h):
    for c in range(w):
        if s[r][c] == "o":
            r_diff.append(r)
            c_diff.append(c)

print(abs(r_diff[0] - r_diff[1]) + abs(c_diff[0] - c_diff[1]))
