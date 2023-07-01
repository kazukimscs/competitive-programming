import math

n , k = map(int, input().split())
a = list(map(int, input().split()))
c = []
d = []

for _ in range(n):
    x, y = map(int, input().split())
    c += [[x, y]]
z1 = c[0][0]
z2 = c[0][1]
for i in range(n):
    c[i][0] -= z1
    c[i][1] -=z2

print(c)
#print(math.sqrt((c[0][0] - c[1][0])**2 + (c[0][1] - c[1][1])**2))

for i in range(1, n):
    d += [math.sqrt((c[0][0] - c[1][0])**2 + (c[i-1][1] - c[i][1])**2)]
    #if d[i] > d[i+1]:
        #r = math.sqrt((c[0][0] - c[1][0])**2 + (c[i][1] - c[i+1][1])**2)
    print(d)

print(max(d))