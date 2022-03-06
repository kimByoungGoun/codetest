from collections import deque

dy = (0, 1, 0, -1)
dx = (1, 0, -1, 0)

graph = []
chk = [[False] * 100 for _ in range(100)]

def is_valid_coord(y, x):
    return 0 <= y < N and 0 <= x < M

def bfs(sy, sx):
    
    chk[sy][sx] = 1
    q = deque()
    q.append((sy, sx))
    while q:
        y, x = q.popleft()
        if y == N and x == M:
            return chk[y][x]
        for k in range(4):
            ny = y + dy[k]
            nx = x + dx[k]
            if is_valid_coord(ny, nx):
                if not chk[ny][nx] and graph[nx][ny] == 1:
                    chk[ny][nx] = chk[sy][sx] + 1
                    q.append((ny, nx))
            
                
if __name__ == '__main__':
    N, M = map(int, input().split())
    
    for _ in range(N):
      graph.append(list(map(int, input())))
    print(bfs(0, 0))
        