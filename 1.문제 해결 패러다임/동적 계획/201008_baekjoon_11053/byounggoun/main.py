import sys

if __name__ == "__main__":
    result = 0
    result_list = list()
    
    count = int(input())
    input_list = input().split(" ")
    result_list.append(int(input_list[0]))
    
    for i in range(count-1):
        tmp = after
        after = before + after
        before = tmp

    print(after)
    

