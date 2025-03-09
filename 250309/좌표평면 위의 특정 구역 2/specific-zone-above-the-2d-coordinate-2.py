import sys

n = int(input())
points = [tuple(map(int, input().split())) for _ in range(n)]
x = [p[0] for p in points]
y = [p[1] for p in points]


answer = sys.maxsize

# 모든 상황 N^2에 대해
for i in range(n):
    # 할거 한다, 최소의 x,y와 최대의 x,y를 구해 넓이 구하기
    min_x = sys.maxsize
    min_y = sys.maxsize
    max_x = 0
    max_y = 0
    for j in range(n):
        if i == j:
            continue
        min_x = min(min_x, x[j])
        min_y = min(min_y, y[j])
        max_x = max(max_x, x[j])
        max_y = max(max_y, y[j])
    area = (max_x - min_x) * (max_y - min_y)
    # 그 중에 최솟값 찾기
    answer = min(answer, area)
print(answer)

