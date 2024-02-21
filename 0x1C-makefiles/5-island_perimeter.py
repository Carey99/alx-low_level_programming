#!/usr/bin/python3
"""Return perimeter of grid
    Grid - list of int [1, 2, 4]
    0 - represent waterzone
    1 - represent land zone
    One cell is square with length 1"""
def island_perimeter(grid):
    height = len(grid)
    width = len(grid[0])
    size = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
