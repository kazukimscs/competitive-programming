n, a, b = map(int, input().split())
tile = []

for i in range(5):
    for j in range(a):
        tile.append(("." * b + "#" * b) * 5)
    for k in range(a):
        tile.append(("#" * b + "." * b) * 5)

for row in range(n * a):
    print(tile[row][:n * b])
