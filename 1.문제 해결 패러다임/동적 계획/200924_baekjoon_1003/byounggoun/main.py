import sys
zero = 0
one  = 0

def fibonacci(n):
    if(n == 0):
        global zero
        zero = zero + 1
        return 0
    elif(n == 1):
        global one
        one = one + 1
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)



if __name__ == "__main__":
    rl = sys.stdin.readline()
    for i in range(int(rl)):
        tmp = sys.stdin.readline()
        num = int(tmp)
        fibonacci(num)
        print(str(zero) + " " + str(one))
        zero = 0
        one = 0


            



