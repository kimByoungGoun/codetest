S = str(input())
result = 0
for i in range(len(S)-1):
    if S[i] != S[i+1]:
        result+= 1
if result % 2 != 0:
    print((result//2)+1)
else:
    print(result//2)