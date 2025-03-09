n, k = map(int, input().split())
cnt_array = [0] * 10010
for _ in range(n):
    pos, char = input().split()
    if char == 'G':
        cnt_array[int(pos)] = 1
    else:
        cnt_array[int(pos)] = 2

# 완전탐색 진행 n - k + 1번 반복 -> O(n -k + 1)
# 사진크기만큼의 k번 반복 -> O(k)
# O(nk)
# 만약 counting array 생성 시 O(n) 수행 -> 값을 받을 때 바로 만들기
# O(nk + n) 연산 1억회 안 넘어서 가능함

answer = 0
for i in range(0, 10010 - k):
    count = 0
    for j in range(i, i + k + 1):
        if cnt_array[j]:
            count += cnt_array[j]
    answer = max(answer, count)

print(answer)