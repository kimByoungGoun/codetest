def calc(n, s, m):
    low, high = 0, max(s)
    while low <= high:
        mid = (low + high) // 2
        num = 0
        for i in s:
            if i >= mid: num += mid
            else: num += i
        if num <= m:
            low = mid + 1
        else:
            high = mid - 1
    return(high)
if __name__ == '__main__':
    n = int(input())
    s = list(map(int, input().split()))
    m = int(input())
    print(calc(n, s, m))
