import sys

if __name__ == '__main__':	
    rl = sys.stdin.readline()
    N = int(rl)
    
    trophy_list = []
    for i in range(N):
        trophy_list.append(int(sys.stdin.readline()))
    
    left_side = 0
    for i in range(N):
        lookable = True
        for j in range(N-i-1):
            if trophy_list[N-i-1] <= trophy_list[j]:
                lookable = False
                break
        
        if lookable:
            left_side += 1

    right_side = 0
    for i in range(N):
        lookable = True
        for j in range(N-i-1):
            if trophy_list[i] <= trophy_list[i+j+1]:
                lookable = False
                break
        
        if lookable:
            right_side += 1
            
    print left_side
    print right_side