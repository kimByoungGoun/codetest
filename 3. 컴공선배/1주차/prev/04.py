if __name__ == '__main__':
    result = 0
    N, L = map(int,input().split())
    S = list(map(int, input().split()))
    S.sort()
    begin = S[0]
    end = S[0] + L
    result = 1
    for i in range(N):
        if begin <= S[i] < end:
            continue
        else:
            start = S[i]
            end = S[i] + L
            result += 1
    print(result)