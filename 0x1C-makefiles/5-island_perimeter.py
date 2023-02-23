#!/bin/usr/python3
"""island_perimeter function"""
def island_perimeter(grid):
    """

    Args:
        grid (list): list of lists

    Returns:
        int: perimeter of the grid
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check if the cell above is water or outside the grid
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Check if the cell below is water or outside the grid
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Check if the cell to the left is water or outside the grid
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Check if the cell to the right is water or outside the grid
                if j == len(grid[0])-1 or grid[i][j+1] == 0:
                    perimeter += 1
    return perimeter
