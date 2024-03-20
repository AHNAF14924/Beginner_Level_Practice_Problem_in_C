#include <stdio.h>

#define ROWS 3
#define COLS 3

void setZeroes(int matrix[ROWS][COLS])
{
    int rowZero = 0, colZero = 0;

    // Check if first row has zero
    for (int j = 0; j < COLS; j++)
    {
        if (matrix[0][j] == 0)
        {
            rowZero = 1;
            break;
        }
    }

    // Check if first column has zero
    for (int i = 0; i < ROWS; i++)
    {
        if (matrix[i][0] == 0)
        {
            colZero = 1;
            break;
        }
    }

    // Mark zeroes in first row and column
    for (int i = 1; i < ROWS; i++)
    {
        for (int j = 1; j < COLS; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }

    // Set zeroes based on marks in first row and column
    for (int i = 1; i < ROWS; i++)
    {
        for (int j = 1; j < COLS; j++)
        {
            if (matrix[0][j] == 0 || matrix[i][0] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    // Set zeroes in first row and column if necessary
    if (rowZero)
    {
        for (int j = 0; j < COLS; j++)
        {
            matrix[0][j] = 0;
        }
    }
    if (colZero)
    {
        for (int i = 0; i < ROWS; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};

    printf("Original Matrix:\n");
    displayMatrix(matrix);

    setZeroes(matrix);

    printf("\nMatrix after setting zeroes:\n");
    displayMatrix(matrix);

    return 0;
}
