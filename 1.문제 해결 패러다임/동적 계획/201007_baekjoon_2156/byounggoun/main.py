import sys
def max(a, b):
    if(a > b):
        return a
    else:
        return b

if __name__ == "__main__":
    dp_list = list()
    input_list = list()
    count = int(input())
    for i in range(count):
        input_list.append(int(input()))

    if count > 0:
        dp_list.append(input_list[0])#0
    
    if count > 1:
        dp_list.append(input_list[0] + input_list[1])#1
    if count > 2:
        if input_list[0] > input_list[1]:#2
            dp_list.append(input_list[0] + input_list[2])
        else:
            dp_list.append(input_list[1] + input_list[2])

    for i in range(3,count):
        dp_list.append(max(dp_list[i - 2] + input_list[i], input_list[i-1] + dp_list[i - 3]+ input_list[i]))

    print(dp_list[-1])
    

