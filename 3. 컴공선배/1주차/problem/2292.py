N = int(input())
result = 1
target = 1
while N > target :
    target += result*6
    result += 1
    
print(result)