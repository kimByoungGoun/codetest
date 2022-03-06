
def combi(a, b):
    prev = [1]
    current = prev
    for i in range(a):
        prev = prev + [1]
        for j in range(1, len(current)):
            current[j] = (prev[j-1] + prev[j])% 10007
        current = current + [1]
        prev = current
    return (current[b])
if __name__ == '__main__':
    a, b = map(int, input().split())
    result = combi(a,b)
    print(result)
        