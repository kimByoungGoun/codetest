import sys

if __name__ == "__main__":
    rl = sys.stdin.readline()
    for i in range(int(rl)):
        tmp = sys.stdin.readline()
        num = int(tmp)

        DP = [1,2,4,0]

        if num < 4:
            print(DP[num - 1])

        else:
            for i in range(4, num+1):
                DP[3] = DP[0] + DP[1] + DP[2]
                DP[0] = DP[1]
                DP[1] = DP[2]
                DP[2] = DP[3]
            print(DP[2])

            



