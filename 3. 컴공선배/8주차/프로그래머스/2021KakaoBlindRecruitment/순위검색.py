import copy
def solution(info, query):
    answer = []
    infos = []
    for tmp in info:
        infos.append(tmp.split())
    querys = []
    for tmp in query:
        querys.append(tmp.split(' and '))
    print(infos)
    print(querys)
    for current_query in querys:
        current_info = copy.deepcopy(infos)
        for current_condition in current_query:
            for tmp in current_info:
                if current_condition
    return answer

if __name__ == "__main__":
    result = solution(["java backend junior pizza 150","python frontend senior chicken 210","python frontend senior chicken 150","cpp backend senior pizza 260","java backend junior chicken 80","python backend senior chicken 50"],
                      ["java and backend and junior and pizza 100","python and frontend and senior and chicken 200","cpp and - and senior and pizza 250","- and backend and senior and - 150","- and - and - and chicken 100","- and - and - and - 150"]
                      )
    #print(result)