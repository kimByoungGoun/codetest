n = int(input())
result = 0
num = 1
while True:
    num += 1
    result += 1
    n -= num
    if n <= 0:
        break
print(result)