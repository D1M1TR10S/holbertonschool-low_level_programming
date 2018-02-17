#!/usr/bin/python3
"""
Finds the perimeter of an island of 1's within a matrix of 0's
"""


def island_perimeter(grid):
    """
    A function that finds the perimeter of an island of 1's
    """
    perim = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                if y - 1 < 0 or grid[y - 1][x] == 0:
                    perim += 1
                if y + 1 > len(grid) - 1 or grid[y + 1][x] == 0:
                    perim += 1
                if x - 1 < 0 or grid[y][x - 1] == 0:
                    perim += 1
                if x + 1 > len(grid[y]) - 1 or grid[y][x + 1] == 0:
                    perim += 1
    return perim
