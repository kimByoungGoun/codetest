i = 1
while True:
    L, P, V = map(int,input().split())
    if L == 0 and P == 0 and V == 0:
        break
    else:
        count = V // P
        if (V % P) >= L:
            print('Case ' + str(i) +': ' + str((count * L) + L))
        else:
            print('Case ' + str(i) +': ' + str((count * L) + (V % P)))
    i+= 1