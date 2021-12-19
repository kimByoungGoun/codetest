def maxCalc(S,N,a,b):#해당 행, 열 순회
    maxCnt = 0
    acnt = 1
    for i in range(N-1):
        if S[i][b] == S[i+1][b]:
            acnt += 1
        else:
            acnt = 1
        maxCnt = max(acnt, maxCnt)
        
    bcnt = 1
    for i in range(N-1):
        if S[a][i] == S[a][i+1]:
            bcnt += 1
        else:
            bcnt = 1
        maxCnt = max(bcnt, maxCnt)
    return maxCnt
def one(S,N,a,b):#a행b열 하나의 칸에 대해 오른쪽, 아래쪽이랑 바꿔 본 후 최대값 반환
    maxCnt = 0
    if a+1 < N:
        S[a][b], S[a+1][b] = S[a+1][b], S[a][b]
        maxCnt = max(maxCnt,maxCalc(S,N,a,b))
        maxCnt = max(maxCnt,maxCalc(S,N,a+1,b))
        S[a][b], S[a+1][b] = S[a+1][b], S[a][b]
    if b+1 < N:
        S[a][b], S[a][b+1] = S[a][b+1], S[a][b]
        maxCnt = max(maxCnt,maxCalc(S,N,a,b))
        maxCnt = max(maxCnt,maxCalc(S,N,a,b+1))
        S[a][b], S[a][b+1] = S[a][b+1], S[a][b]
    return maxCnt

if __name__ == '__main__':
    N = int(input())
    S=[list(input()) for _ in range(N)]

    result = 0
    for i in range(N):
        for j in range(N):
            result = max(result, one(S,N,i,j))
    
    print(result)
    
    