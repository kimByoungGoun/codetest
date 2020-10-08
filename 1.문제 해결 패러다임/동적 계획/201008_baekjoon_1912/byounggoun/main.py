import sys

if __name__ == "__main__":

    result = 0
    dp_list = list()
    input_nums = list()
    count = int(input())
    input_nums = input().split(" ")
    dp_list.append(int(input_nums[0]))
    result = dp_list[0]
    for i in range(1, count):
        if dp_list[-1]+int(input_nums[i]) < int(input_nums[i]):
            dp_list.append(int(input_nums[i]))
        else:
            dp_list.append(dp_list[-1] + int(input_nums[i]))
        
        if result < dp_list[-1]:
            result = dp_list[-1]

    print(result)
    

