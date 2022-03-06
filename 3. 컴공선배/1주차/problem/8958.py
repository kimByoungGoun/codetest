N = int(input())
for i in range(N):
    S = list(input())
    score = 0
    sum = 0
    for j in S:
        if j == 'O':
            score += 1
            sum += score
        else : 
            score = 0
    print(sum)
