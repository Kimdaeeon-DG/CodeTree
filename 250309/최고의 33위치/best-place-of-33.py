n = int(input())

matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

answer = 0
for k in range(n - 2):
    count = 0
    for i in range(k, k + 3):
        for j in range(k, k + 3):
            if matrix[i][j] == 1:
                count += 1
        answer = max(answer, count)

print(answer)