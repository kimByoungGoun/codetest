if __name__ == "__main__":
    enable = {str(i) for i in range(10)}
    N = int(input()) 
    M = int(input()) 
    if M != 0:
        enable -= set(map(str, input().split())) 
    min_cnt = abs(100 - N)
    for num in range(1000001):
        num = str(num)
        for j in range(len(num)):
            if num[j] not in enable:
                break
            elif j == len(num) - 1:
                min_cnt = min(min_cnt, abs(N - int(num)) + len(str(num)))
    print(min_cnt)