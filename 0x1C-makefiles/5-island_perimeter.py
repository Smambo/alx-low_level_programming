#!/usr/bin/python3
"""
Below function returns perimeter of island
described in grid.
"""


def island_perimeter(grid):
    """
    Args:
        grid - list of list of integers
        0 - water zone
        1 - land zone
    """
    count = 0
    if grid:
        g = len(grid)
        r = len(grid[0])
        for idx_1, row in enumerate(grid):
            for idx_2, place in enumerate(row):
                if place:
                    if idx_1 == 0:
                        count += 1
                    else:
                        if not grid[idx_1 - 1][idx_2]:
                            count += 1
                    if idx_1 >= g - 1:
                        count += 1
                    else:
                        if not grid[idx_1 + 1][idx_2]:
                            count += 1
                    if idx_2 == 0:
                        count += 1
                    else:
                        if not row[idx_2 - 1]:
                            count += 1
                    if idx_2 >= r - 1:
                        count += 1
                    else:
                        if not row[idx_2 + 1]:
                            count += 1

    return (count)
