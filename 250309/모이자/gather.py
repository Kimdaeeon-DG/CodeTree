import sys
n = int(input())
A = list(map(int, input().split()))

# 한 점을 기준으로 abs(A[i] - A[j])의 총합이 적은 것
answer = sys.maxsize
# O(n) + O(n-1)
for i in range(n):
    count = 0
    for j in range(n):
        count += abs(i - j) * A[j]
    answer = min(answer, count)

print(answer)


