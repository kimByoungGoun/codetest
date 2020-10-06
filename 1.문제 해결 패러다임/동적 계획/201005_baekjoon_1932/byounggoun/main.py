import sys
import copy

def max(a, b):
    if(a > b):
        return a
    else:
        return b

if __name__ == "__main__":
    before_line = list()
    line = list()
    input_list = list()
    count = int(input())
    line.append(int(input()))

    if count >= 2:
        input_list = input().split(" ")
        line.append(int(input_list[1]) + line[0])
        line[0] = int(input_list[0]) + line[0]
        
    before_line = copy.deepcopy(line)

    for i in range(2, count):
        input_list = input().split(" ")
        
        for j in range(1, i):
            line[j] = max(before_line[j-1], before_line[j]) + int(input_list[j])


        line[0] = int(input_list[0]) + int(before_line[0])
        line.append(int(input_list[i]) + int(before_line[i-1]))
        before_line = copy.deepcopy(line)


    result = 0
    for i in range(int(count)):
        if(line[i] > result):
            result = line[i]
        else:
            result = result

    print(result)