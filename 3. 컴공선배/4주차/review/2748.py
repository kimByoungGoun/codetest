def pibonachi(n):
    if n == 1:
        return 1
    else:
        a = 1
        b = 1
        c = 0
        for i in range(n - 2):
            c = a
            a = b
            b = c + b
        return b
if __name__ == '__main__':
    n = int(input())
    result = pibonachi(n)
    print(result)
        