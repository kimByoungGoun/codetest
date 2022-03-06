N = int(input())
for i in range(N):
    S = list(map(int,input().split()))
    count = S[0]
    score = S[1:]
    avr = 0
    overcnt = 0
    for j in score:
        avr += j
    avr = avr/count    
    for j in score:
        if j > avr:
            overcnt += 1
    print('{:.3f}'.format(overcnt/count*100) + '%')    

