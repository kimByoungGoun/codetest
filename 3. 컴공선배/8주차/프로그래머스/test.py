def solution(new_id):
    answer = new_id
    answer = stepOne(answer)
    answer = stepTwo(answer)
    answer = stepThree(answer)
    answer = stepFour(answer)
    answer = stepFive(answer)
    answer = stepSix(answer)
    answer = stepSeven(answer)
    return answer
def stepOne(new_id):
    return new_id.lower()
def stepTwo(new_id):
    tmp = list(new_id)
    result = ''
    for i in range(len(tmp)):
        ascii = ord(tmp[i])
        if (ascii <123 and ascii>96) or (ascii>47 and ascii<58) or ascii==45 or ascii==46 or ascii==95:
            result = result + tmp[i]
    return result
def stepThree(new_id):
    tmp = new_id
    changed = 1
    while(changed == 1):
        changed = 0
        if tmp.find('..') != -1:
            tmp.replace('..', '.')
            changed = 1
    return tmp
def stepFour(new_id):
    tmp = new_id
    tmp = tmp.strip('.')
    return tmp
def stepFive(new_id):
    tmp = new_id
    if tmp == '':
        tmp = 'a'
    return tmp
def stepSix(new_id):
    tmp = new_id
    tmp = tmp[0:15]
    tmp = stepFour(tmp)
    return tmp
def stepSeven(new_id):
    tmp = list(new_id)
    while(len(tmp) < 3):
        tmp.append(tmp[-1])
    return "".join(tmp)
if __name__ == "__main__":
    result = solution("bat.y.abcdefghi")
    print(result)