#!/usr/bin/python3
"""  island perimeter Technical interview preparation """


def island_perimeter(grid):
    """
     returns the perimeter of the island described in grid:

     Arg(grid):
        grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
    """
    count = 0
    num = 0
    for i in grid:
        num1 = 0
        for j in i:
            if j == 1:
                try:
                    if grid[num - 1][num1] == 0 or (num - 1) < 0:
                        count += 1
                except IndexError:
                    count += 1
                try:
                    if grid[num + 1][num1] == 0:
                        count += 1
                except IndexError:
                    count += 1
                try:
                    if grid[num][num1 + 1] == 0:
                        count += 1
                except IndexError:
                    count += 1
                try:
                    if grid[num][num1 - 1] == 0 or (num1 - 1) < 0:
                        count += 1
                except IndexError:
                    count += 1
            num1 += 1
        num += 1

    return count
