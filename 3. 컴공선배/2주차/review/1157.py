alphbets = [i for i in range(65,91)]
s = str(input())
s = s.upper()
max = 0
result = ''
for i in alphbets:
    tmp = s.count(chr(i))
    if tmp > max:
        max = tmp
        result = chr(i)
    elif tmp == max:
        result = '?'
print(result)