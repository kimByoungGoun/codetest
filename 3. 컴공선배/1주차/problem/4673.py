total = set(range(1,10001))
non_self = set()
for i in range(1,10001):
    result = i
    for j in str(i):
        result += int(j)
    non_self.add(result)
self = sorted(total - non_self)
for i in self:
    print(i)