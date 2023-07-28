#!/usr/bin/python3

"""
Returns the perimeter of the island.
"""


def island_perimeter(grid):
    """
    Method:
    -------
        Calculate the perimeter of the island described in grid.
    Parameters:
    -----------
        grid: list of list of integers:
            -0 represents water
            -1 represents land
            -Each cell is square, with a side length of 1
            -Cells are connected horizontally/vertically (not diagonally).
            -grid is rectangular, with its width and height not exceeding 100.
    Returns:
    --------
        The perimeter of the island.
    """
    p = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                p += 4
                if i > 0 and grid[i - 1][j] == 1:
                    p -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    p -= 2
    return p
