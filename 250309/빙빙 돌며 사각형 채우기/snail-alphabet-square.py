n, m = map(int, input().split())
arr = [[0] * m for _ in range(n)]

#    오,아래, 왼,위
dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]
dir_num = 0

# 더 이상 갈 수 없거나 이미 값이 있으면 X. InRange()
def InRange(x, y):
    return 0 <= x < m and 0 <= y < n and arr[y][x] == 0

x, y = 0, 0
arr[0][0] = 'A'

for i in range(1, n * m):
    nx, ny = x + dx[dir_num], y + dy[dir_num]
    if not InRange(nx, ny):
        dir_num = (dir_num + 1) % 4
        nx, ny = x + dx[dir_num], y + dy[dir_num]
    x, y = nx, ny
    arr[y][x] = chr(i + 65)

for row in arr:
    print(' '.join(map(str, row)))
   