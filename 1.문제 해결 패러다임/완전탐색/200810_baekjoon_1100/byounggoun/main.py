import sys

if __name__ == '__main__':
    count = 0
    for i in range(8):
        rl = sys.stdin.readline()
        for j in range(8):
            if (i+j)%2 == 0:
                if rl[j] == 'F':
                    count = count + 1
            else:
                continue

        #print(i)

            
    print(count)
