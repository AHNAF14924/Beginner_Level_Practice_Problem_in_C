#include <stdio.h>

#define ROWS 3
#define COLS 3

int searchMatrix(int matrix[ROWS][COLS], int target)
{
    int row = 0, col = COLS - 1;

    while (row < ROWS && col >= 0)
    {
        if (matrix[row][col] == target)
        {
            return 1;
        }
        else if (matrix[row][col] < target)
        {
            row++;
        }
        else
        {
            col--;
        }
    }

    return 0;
}

int main()
{
    int matrix[ROWS][COLS] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int target = 5;

    if (searchMatrix(matrix, target))
    {
        printf("Element %d found in the matrix.\n", target);
    }
    else
    {
        printf("Element %d not found in the matrix.\n", target);
    }

    return 0;
}
