def calc(n):
    cur_list = [0,1,1,1,1,1,1,1,1,1]
    pre_list = cur_list.copy()
    for i in range(1, n):
        cur_list[0] = pre_list[1]
        cur_list[9] = pre_list[8]
        for j in range(1,9):
            cur_list[j] = (pre_list[j-1] + pre_list[j+1])%1000000000
        pre_list = cur_list.copy()
    return sum(cur_list)%1000000000
if __name__ == '__main__':
    n = int(input())
    print(calc(n))