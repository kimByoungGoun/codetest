X = int(input())
left = 1
target = 1
while X > target :
    X -= target
    target+= 1
    left = X
sum = target + 1
if sum % 2 == 0:
     print(str(sum-left) + '/' + str(left))
else:
    print(str(left) + '/' + str(sum-left))   