N, C, G, H = map(int, input().split())
ranges = [tuple(map(int, input().split())) for _ in range(N)]

answer = 0
# 모든 상황 온도가 0 ~ 1000 경우에 대해 
for i in range(1001):
    # 각 기기들의 작업량을 구함
    count = 0
    # 할 거 한다, 최대 작업량을 구함.
    for j in range(N):
        if i < ranges[j][0]:
            count += C
        elif i <= ranges[j][1]:
            count += G
        else:
            count += H
    answer = max(answer, count)
print(answer)