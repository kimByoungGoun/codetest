from itertools import combinations

def result(heights):
    for combi in combinations(heights, 7):
        if sum(combi) == 100:
            for i in sorted(combi):
                print(i)
            break
if __name__ == '__main__':
    heights = [int(input()) for _ in range(9)]
    result(heights)                    
