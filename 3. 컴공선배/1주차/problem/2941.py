dic = ['c=', 'c-', 'dz=', 'd-' , 'lj', 'nj', 's=', 'z=']
s = str(input())
for i in dic:
    s = s.replace(i,' ')
result = len(s)
print(result)