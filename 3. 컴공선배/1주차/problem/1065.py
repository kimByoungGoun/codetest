def test(a):
    if a < 10:
        return True
    diff = int(a/10)%10 - int(a%10)
    s = str(a)
    for i in range(len(s)-1):
        if(int(s[i]) - int(s[i+1])) != diff:
            return False
    return True
N = int(input())
result = 0
for i in range(1,N+1):
    if test(i):
        result += 1
        #print(i)
print(result)
