def max(a ,b):
    if a > b:
        return a
    else:
        return b
def calc(arr, n):
    if n == 1:
        return(max(arr[0][0],arr[1][0]))
    sum = [[arr[0][0], arr[1][0] + arr[0][1]],[arr[1][0],arr[0][0] +arr[1][1]]]
    for i in range(2, n):
        sum[0].append(max(sum[1][i-2],sum[1][i-1]) + arr[0][i])
        sum[1].append(max(sum[0][i-2],sum[0][i-1]) + arr[1][i])
    return (max(sum[0][n-1], sum[1][n-1]))
if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        n = int(input())
        arr = []
        for i in range(2):    
            arr.append(list(map(int, input().split())))
        result = calc(arr, n)
        print(result)