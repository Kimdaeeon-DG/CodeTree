N = int(input())
a, b, c = map(int, input().split())
answer = 0

# 모든 경우 N * N * N에 대하여 
# -> O(N^3) 100만이라 충분함
for i in range(1, N + 1):
    for j in range(1, N + 1) :
        for k in range(1, N + 1):
# 할 거 한다, abs(a - i) ... abs(c - i) 중 하나라도 2 이내면 answer += 1
            if abs(a-i) <= 2 or abs(b-j) <= 2 or abs(c-k) <= 2:
                answer += 1
print(answer)

