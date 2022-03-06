n = int(input())
n = 1000 - n
result = 0
result += n // 500
n = n % 500
result += n // 100
n = n % 100
result += n // 50
n = n % 50
result += n // 10
n = n % 10
result += n // 5
n = n % 5
result += n // 1
n = n % 1
print(result)