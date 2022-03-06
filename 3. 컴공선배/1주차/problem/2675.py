N = int(input())
for i in range(N):
    cnt, s = input().split()
    cnt = int(cnt)
    s = str(s)
    result = ''
    for j in s:
        for k in range(cnt):
            result += j
    print(result)        
    