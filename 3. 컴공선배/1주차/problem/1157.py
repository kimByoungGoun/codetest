s = str(input())
s = s.upper()
alphabet_up = list(range(65,91))
max = 0
result = ''
for x in alphabet_up :
    if s.count(chr(x)) > max:
        max = s.count(chr(x))
        result = chr(x)
    elif s.count(chr(x)) == max:
        result = '?'
print(result)
    