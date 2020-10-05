import sys

def max(a, b):
    if(a > b):
        return a
    else:
        return b

if __name__ == "__main__":
    line = list()
    input_list = list()
    count = input()
    line.append(int(input()))
    for i in range(1, int(count)):
        input_list = input().split(" ")

        for j in range(1, i-1):
            line[j] = max(line[j-1], line[j]) + int(input_list[j])

        line[0] = int(input_list[0]) + int(line[0])
        line.append(int(input_list[i]) + int(line[i-1]))
        print(line)

    result = 0
    for i in range(int(count)):
        if(line[i] > result):
            result = line[i]
        else:
            result = result

    print(result)