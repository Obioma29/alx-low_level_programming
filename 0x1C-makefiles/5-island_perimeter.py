#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    c = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for a, b in enumerate(grid):
        for j, k in enumerate(b):
            if k == 1:
                if a == 0 or grid[a - 1][j] != 1:
                    c += 1
                if j == 0 or grid[a][j - 1] != 1:
                    c += 1
                if j == width or grid[a][j + 1] != 1:
                    c += 1
                if a == length or grid[a + 1][j] != 1:
                    c += 1
    return c
