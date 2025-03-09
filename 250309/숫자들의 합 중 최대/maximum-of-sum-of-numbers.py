X, Y = map(int, input().split())

# 모든 상황 X ~ Y인 경우에
answer = 0
for i in range(X, Y + 1):
    char = str(i)
    count = 0
    # 할 거 한다, 각 자리의 수의 합
    for j in range(len(char)):
        count += int(char[j])
    answer = max(answer, count)

print(answer)