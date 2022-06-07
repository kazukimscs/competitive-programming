from itertools import combinations

def solve():
    n, w = map(int, input().split())
    a = list(map(int, input().split())) + [0, 0]
    good = [False] * (w + 1)

    for x, y, z in combinations(a, 3):
        sum = x + y + z
        if sum <= w:
            good[sum] = True
    return good.count(True)

print(solve())
