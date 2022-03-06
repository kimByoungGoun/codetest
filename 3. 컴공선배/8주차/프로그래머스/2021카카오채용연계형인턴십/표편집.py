def solution(n, k, cmd):
    answer = ''
    for _ in range(n):
        answer = answer+'O'
    answers = []
    answers.append(answer)
    current = k
    for process in cmd:
        if process.find('D') != -1:
            for _ in range(int(process[2:])):
                if answer[current+1] == 'X':
                    current += 2
                else:
                    current += 1
            print(current)  
        elif process.find('U') != -1:
            for _ in range(int(process[2:])):
                if answer[current-1] == 'X':
                    current -= 2
                else:
                    current -= 1 
            print(current)  
        elif process.find('C') != -1:
            tmp = list(answer)
            tmp[current] = 'X'
            answer = "".join(tmp)
            if tmp[current +1:].count('O')  > 0:
                current = current+1
            else:
                current = current-1
            answers.append(answer)
        elif process.find('Z') != -1:
            if len(answers) > 0:
                del answers[-1]
                answer = answers[-1]
        print(answer)
    return answer

if __name__ == "__main__":
    result = solution(8, 2, ["D 2","C","U 3","C","D 4","C","U 2","Z","Z","U 1","C"])
    #print(result)