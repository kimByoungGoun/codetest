while True:
    S=list(map(int, input().split()))
    if S[0] == 0 and S[1] == 0 and S[2] == 0:
        break
    else:
        S.sort(reverse=True)
        if (S[0] ** 2) == (S[1] ** 2)  + (S[2] ** 2) :
            print('right')
        else:
            print('wrong')