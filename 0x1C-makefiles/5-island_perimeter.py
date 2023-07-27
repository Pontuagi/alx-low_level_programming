#!/usr/bin/python3

"""
This module contains one function island_perimeter
"""


def island_perimeter(grid):
    """
    This function calculates the perimeter of a grid
    The function takes one argument (grid)
    """
    rows = len(grid)
    colmns= len(grid[0])

    perimeter = 0

    for row in range(rows):
        for colm in range(colmns):
            if grid[row][colm] ==1:
                perimeter += 4

                #check for adjacent grids
                if row > 0 and grid[row -1][colm] == 1:
                    perimeter -= 1
                if row < rows -1 and grid[row + 1][colm] == 1:
                    perimeter -= 1
                if colm > 0 and grid[row][colm - 1] == 1:
                    perimeter -= 1
                if colm < colmns - 1 and grid[row][colm + 1] == 1:
                    perimeter -= 1
    return perimeter
