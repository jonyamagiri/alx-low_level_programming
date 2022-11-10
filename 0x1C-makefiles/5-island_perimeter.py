#!/usr/bin/python3
"""module 5-island_perimeter.py"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.
    Arguments:
        grid (list): A list of list of integers representing an island
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                size += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    edges += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    edges += 1
    return (size * 4 - edges * 2)
