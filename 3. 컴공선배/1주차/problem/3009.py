x = []
y = []
for i in range(3):
        in_x, in_y = map(int, input().split())
        x.append(in_x)
        y.append(in_y)
for i in range(3):
        if x.count(x[i]) == 1:
                result_x = x[i]
        if y.count(y[i]) == 1:
                result_y = y[i]
print(result_x, result_y)