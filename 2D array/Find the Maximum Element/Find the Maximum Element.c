#include <stdio.h>

#define ROWS 3
#define COLS 3

int findMaxElement(int matrix[ROWS][COLS])
{
    int max = matrix[0][0];
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int maxElement = findMaxElement(matrix);
    printf("Maximum Element in the matrix: %d\n", maxElement);

    return 0;
}
