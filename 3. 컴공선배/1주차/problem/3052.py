s = []
for i in range(10):
    num = int(input())%42
    if s.count(num) > 0:
        continue
    else:
        s.append(num)
print(len(s))
