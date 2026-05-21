import sys

grid = []
for _ in range(5):
    line = sys.stdin.readline()
    if line:
        grid.append(list(map(int, line.split())))

row_1, col_1 = 0, 0

for i in range(5):
    for j in range(5):
        if grid[i][j] == 1:
            row_1 = i
            col_1 = j
            break 

steps = abs(row_1 - 2) + abs(col_1 - 2)

print(steps)
