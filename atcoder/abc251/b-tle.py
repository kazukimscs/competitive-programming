import itertools

n, w = map(int, input().split())
a = list(map(int, input().split()))

c_2 = [i for i in itertools.combinations(a, 2)]
c_3 = [i for i in itertools.combinations(a, 3)]
ans = 0

com_sum  = list(set(a + [sum(j) for j in c_2] + [sum(j) for j in c_3]))

for k in range(len(com_sum)):
    if com_sum[k] <= w:
        ans += 1

print(ans)
