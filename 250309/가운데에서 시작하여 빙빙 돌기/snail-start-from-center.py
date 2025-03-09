n = int(input())
answer = [[0] * n for _ in range(n)]


def in_range(x, y):
    return 0 <= x and x < n and 0 <= y and y < n

# 왼 위 오 아래
dxs, dys = [-1, 0, 1, 0], [0, -1, 0, 1]
x, y = n - 1, n - 1 
dir_num = 0           
answer[x][y] = n * n

for i in range(n * n - 1, 0, -1):
    nx, ny = x + dxs[dir_num], y + dys[dir_num]
    if not in_range(nx, ny) or answer[ny][nx] != 0:
        dir_num = (dir_num + 1) % 4

    x, y = x + dxs[dir_num], y + dys[dir_num]
    answer[y][x] = i

# 출력:
for i in range(n):
    for j in range(n):
        print(answer[i][j], end = ' ')
    print()
