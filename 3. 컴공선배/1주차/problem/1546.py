N = int(input())
S = list(map(int, input().split()))
max = 0
result = 0
for i in range(N):
    if max < S[i]:
        max = S[i]
for i in range(N):
    result += S[i]
result = result / max * 100 / N
print(result)