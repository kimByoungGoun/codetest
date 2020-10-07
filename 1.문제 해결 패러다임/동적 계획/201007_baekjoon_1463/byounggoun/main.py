import sys
def min_3(a, b,c ):
    if(a < b):
        if c < a:
            return c
        else:
            return a
    else:
        if c < b:
            return c
        else:
            return b
def min_2(a,b):
    if(a<b):
        return a
    else:
        return b

if __name__ == "__main__":
    dp_list = list()
    input_num = int(input())
    dp_list.append(0)#0
    dp_list.append(0)#1


    for i in range(2, input_num+1):
        tmp_minus1 = dp_list[i-1]
        dp_list.append(dp_list[i-1]+1)
        if i%3 == 0:
            dp_list[-1] = min_2((dp_list[int(i/3)]+1), dp_list[-1])
        if i%2 == 0:
            dp_list[-1] = min_2((dp_list[int(i/2)]+1), dp_list[-1])
        

    print(dp_list[-1])
    

