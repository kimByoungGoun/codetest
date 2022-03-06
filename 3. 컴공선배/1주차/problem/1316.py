def check(s):
    s = str(s)
    selected = s[0]
    for i in range(len(s)-1):
        if s[i] != s[i+1]:
            if selected.count(s[i+1]) > 0:
                return False
            else:
                selected = selected + s[i+1]
    return True
if __name__ == '__main__':
    n = int(input())
    result = 0
    for i in range(n):
        s = str(input())
        if check(s):
            result += 1
    print(result)
        