n, k = map(int, input().split())
arr = list(map(int, input().split()))

# 완전탐색 진행 O(n - k + 1)
# 더할 때 K 만큼 수행 O(k)
# O(nk) -> 최대 10000이니 수행 가능

answer = -1

for i in range(n - k + 1):
    count = 0
    for j in range(i, i + k):
        count += arr[j]
    answer = max(answer, count)

print(answer)

    
