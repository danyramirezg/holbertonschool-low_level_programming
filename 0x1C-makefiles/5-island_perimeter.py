#!/usr/bin/python3
"""
Function returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if (i - 1) < 0 or grid[i - 1][j] == 0:
                    count = count + 1
                elif (i - 1) == 0:
                    count = count + 1
                elif (i + 1) == 0:
                    count = count + 1
                if (i + 1) > len(grid[i - 1]):
                    count = count + 1
                if (j + 1) > len(grid[i - 1]):
                    count = count + 1
                if (j + 1) == 0:
                    count = count + 1
                if (j - 1) < 0:
                    count = count + 1
    return count
