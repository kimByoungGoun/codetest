import sys

if __name__ == "__main__":

    before = 0
    after = 1
    count = int(input())
    for i in range(count-1):
        tmp = after
        after = before + after
        before = tmp

    print(after)
    

