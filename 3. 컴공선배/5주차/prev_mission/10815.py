def calc(array, target, start, end):
    while start <= end:
        mid = (start + end) // 2

        if array[mid] == target:
            return mid
        elif array[mid] > target:
            end = mid - 1
        else:
            start = mid + 1
    return -1

if __name__ == '__main__':
    n = int(input())
    card = list(map(int, input().split()))
    m = int(input())
    check = list(map(int, input().split()))
    card.sort()
    for i in range(m):
        if calc(card, check[i], 0, n - 1) != -1:
            print(1, end=' ')
        else:
            print(0, end=' ')