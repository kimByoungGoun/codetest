def calc(n):
    prev = [0,1,1,1,1,1,1,1,1,1]
    current = prev.copy()
    for i in range(n-1):
        for j in range(10):
            if j == 0:
                current[j] = (prev[j+1])% 1000000000
            elif j == 9:
                current[j] = (prev[j-1])% 1000000000    
            else:
                current[j] = (prev[j-1] + prev[j+1])% 1000000000
        prev = current.copy()
    result = 0    
    for i in range(10):
        result = (result +current[i])% 1000000000
    return (result)
if __name__ == '__main__':
    n = int(input())
    result = calc(n)
    print(result)