arr = [[0, 0, 0, 0], [1, 0, 1, 0], [0, 0, 0, 0], [1, 0, 1,  0]]
is_visited = [[False] * 4 for x in range(4)]
startx, starty = 0, 0
endx, endy = 3, 3
queue = []
state = (startx, starty, 0)
is_visited[0][0] = True
queue.append(state)
dirs = ((0 , 1), (0, -1), (-1, 0), (1, 0))
while len(queue):
    print(queue)
    s = queue.pop(0)
    if (s[0] == endx and s[1] == endy):
        print(s[2])
        break
    for dir in dirs:
        nx = s[0] + dir[0]
        ny = s[1] + dir[1]
        if 0 <= nx <= 3 and 0 <= ny <= 3 and arr[nx][ny] == 0 and is_visited[nx][ny] == False:
            queue.append((nx, ny, s[2] + 1))
            is_visited[nx][ny] = True 