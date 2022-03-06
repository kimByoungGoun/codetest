import sys
sys.setrecursionlimit(10**9)
flag = False


def dfs(array, r, c, value):
    global flag

    if c + 1 < m and array[r][c + 1] == value:
        flag = True
        array[r][c] = "x"
        array[r][c + 1] = "x"
        dfs(array, r, c + 1, value)
    elif c + 1 == m and array[r][0] == value:
        flag = True
        array[r][c] = "x"
        array[r][0] = "x"
        dfs(array, r, 0, value)

    if c - 1 >= 0 and array[r][c - 1] == value:
        flag = True
        array[r][c] = "x"
        array[r][c - 1] = "x"
        dfs(array, r, c - 1, value)
    elif c - 1 == -1 and array[r][m - 1] == value:
        flag = True
        array[r][c] = "x"
        array[r][m - 1] = "x"
        dfs(array, r, m - 1, value)

    if r - 1 >= 0 and array[r - 1][c] == value:
        flag = True
        array[r][c] = "x"
        array[r - 1][c] = "x"
        dfs(array, r - 1, c, value)

    if r + 1 < n and array[r + 1][c] == value:
        flag = True
        array[r][c] = "x"
        array[r + 1][c] = "x"
        dfs(array, r + 1, c, value)


def calc(array, test, n, m):
    global flag

    if test[1] == 0:  
        for i in range(test[0] - 1, n, test[0]):
            for _ in range(test[2]):
                array[i] = [array[i][-1]] + array[i][:-1]
    else: 
        for i in range(test[0] - 1, n, test[0]):
            for _ in range(test[2]):
                array[i] = array[i][1:] + [array[i][0]]
    flag = False
    for i in range(n):
        for j in range(m):
            if array[i][j] != "x":
                dfs(array, i, j, array[i][j])

    if not flag: 
        total = 0
        cnt = 0
        for i in range(n):
            for j in range(m):
                if array[i][j] != "x":
                    total += array[i][j]
                    cnt += 1

        if cnt <= 1:
            return
        else:
            average = total / cnt
            for i in range(n):
                for j in range(m):
                    if array[i][j] != "x":
                        if array[i][j] > average:
                            array[i][j] -= 1
                        elif array[i][j] < average:
                            array[i][j] += 1

if __name__ == "__main__":
    n, m, t = map(int, input().split())
    array = [list(map(int, input().split())) for _ in range(n)]

    task = [list(map(int, input().split())) for _ in range(t)]
    for i in range(t):
        calc(array, task[i], n, m)

    # 출력
    answer = 0
    for i in range(n):
        for j in range(m):
            if array[i][j] != "x":
                answer += array[i][j]
    print(answer)