import sys
def max_3(a, b,c):
    if(a > b):
        if a > c:
            return a
        else:
            return c
    else:
        if b > c:
            return b
        else:
            return c

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
        dp_list.append(max_3(input_list[0] + input_list[1], input_list[0] + input_list[2], input_list[1]+input_list[2]))#2

    for i in range(3,count):
        dp_list.append(max_3(dp_list[i - 2] + input_list[i], input_list[i-1] + dp_list[i - 3]+ input_list[i], dp_list[i-1]))

    print(dp_list[-1])
    

