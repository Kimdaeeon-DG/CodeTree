n, t = map(int, input().split())
u = list(map(int, input().split()))
d = list(map(int, input().split()))




for j in range(t):
    tmp = u[-1]
    for i in range(n - 2, -1, -1):
        u[i + 1] = u[i]
    u[0] = d[-1]
    for j in range(n - 2, -1, -1):
        d[j + 1] = d[j]
    d[0] = tmp

for i in range(n):
    print(u[i], end = ' ')
print()
for i in range(n):
    print(d[i], end = ' ')