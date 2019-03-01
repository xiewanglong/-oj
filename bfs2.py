arr = [[0, 0, 0, 0], [1, 0, 1, 0], [0, 0, 0, 0], [1, 0, 1,  0]]
is_visited = [[False] * 4 for x in range(4)]
endx, endy = 3, 3
queue = []
state = {'x':0,'y':0,'n':0}
is_visited[0][0] = True
queue.append(state)
dirs = ((0 , 1), (0, -1), (-1, 0), (1, 0))
while len(queue):
    print(queue)
    if (state['x'] == endx and state['y'] == endy):
        print(state['n'])
        break
    for dir in dirs:
        nx = state['y'] + dir[0]
        ny = state['x'] + dir[1]
        if 0 <= nx <= 3 and 0 <= ny <= 3 and arr[nx][ny] == 0 and is_visited[nx][ny] == False:
            nn = state['n'] + 1
            state.update ({'x':nx,'y':ny,'n':nn})
            is_visited[nx][ny] = True 