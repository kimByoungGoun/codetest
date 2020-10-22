import sys
def max(a, b):
    if(a > b):
        return a
    else:
        return b

if __name__ == "__main__":
    result = 0
    result_list = list()
    count = input()
    
    input_list = input().split(" ")
    for i in range(len(input_list)):
        input_list[i] = int(input_list[i])
    
    #print(input_list)
    dp_list = list()
    
    for i in range(len(input_list)):
        dp_list.append(input_list[i])
        for j in range(len(dp_list)-1):
            dp_list[i] = (max(dp_list[j] + input_list[len(dp_list)-2 - j], dp_list[i]))
        #print(str(i+1) + " : " + str(dp_list[i]))
    print(dp_list[len(dp_list)-1])
    
    

