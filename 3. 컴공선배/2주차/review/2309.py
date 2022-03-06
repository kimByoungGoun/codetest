from itertools import combinations
def calc(s):
    comb = combinations(s, 7)
    for x in comb:
        if sum(x) == 100:
            result = sorted(x)
            for i in result:
                print(i)
            return
s = list()
for i in range(9):
    s.append(int(input()))
calc(s)
