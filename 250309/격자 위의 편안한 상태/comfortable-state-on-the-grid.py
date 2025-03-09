n, r, c = map(int, input().split())
a = [[0] * (n + 1) for _ in range(n + 1)]

for i in range(1, n + 1):
    row = list(map(int, input().split()))
    for j in range(1, n + 1):
        a[i][j] = row[j - 1]

dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]
i = 0

def in_range(a, b):
    return 0 < a <= n and 0 < b <= n

def condition(i):
    if in_range(r+dy[i], c+dx[i]):
        return a[r][c] < a[r+dy[i]][c+dx[i]]

print(a[r][c], end=" ")

while True:
    if i == 4:
        break
    if condition(i):
        r, c = r+dy[i], c+dx[i]
        print(a[r][c], end=" ")
        i = 0
    i += 1
        

