import sys

if __name__ == '__main__':
    count = 0
    for i in range(8):
        rl = sys.stdin.readline()
        if i%2 == 0:
            if rl[i] == 'F':
                count = count + 1
        else:
            if rl[i] == 'F':
                count = count + 1
        #print(i)

            
    print(count)
