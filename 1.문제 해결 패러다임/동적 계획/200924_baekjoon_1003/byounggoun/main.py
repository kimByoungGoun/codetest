import sys
zero = 0
one  = 0

def fibonacci(n):
    tmp = 0
    result = 1
    if(n == 0):
        return 0
    elif(n == 1):
        return 1
    else:
        for i in range(n-1):
            result = result + tmp
            tmp = result - tmp
            
        return result



if __name__ == "__main__":
    rl = sys.stdin.readline()
    for i in range(int(rl)):
        tmp = sys.stdin.readline()
        num = int(tmp)
        if num >= 1:
            zero = fibonacci(num -1)
            one = fibonacci(num)
        else:
            zero = 1
            one  = 0
        print(str(zero) + " " + str(one))



            



