def calc(input):
    a = int(input/10)
    b = int(input%10)
    return (b * 10) + ((a + b)%10)


if __name__ == '__main__':
    N = int(input())
    result = 0
    target = N 
    while True:
        result += 1
        N = calc(N)
        #print("middle " + str(N))
        if N == target:
            break
    print(result)
