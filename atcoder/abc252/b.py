n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a_max = [i + 1 for i, v in enumerate(a) if v == max(a)]

if len(set(a_max) & set(b)) >= 1:
    print("Yes")
else:
    print("No")
    