


if __name__ == '__main__':
    result = 0
    N, K = input().split(' ')
    N = int(N)
    K = int(K)
    coins = [int(input()) for _ in range(N)]
    for i in range(N):
        if int(K / coins[N - i - 1]) >= 1:
            result+= int(K / coins[N - i - 1])
            K = K % (coins[N - i - 1])

    print(result)