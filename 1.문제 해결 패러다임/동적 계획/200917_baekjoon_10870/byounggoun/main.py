import sys

if __name__ == "__main__":
    rl = sys.stdin.readline()
    tmp = 0
    result = 1
    if(int(rl) == 0):
        print(0)
    elif(int(rl) == 1):
        print(1)
    else:
        for i in range(int(rl)-1):
            result = result + tmp
            tmp = result - tmp
            
        print(result)


