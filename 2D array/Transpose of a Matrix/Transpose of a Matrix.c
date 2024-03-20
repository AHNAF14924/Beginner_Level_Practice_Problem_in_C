#include <stdio.h>

#define ROWS 3
#define COLS 3

void transposeMatrix(int matrix[ROWS][COLS])
{
    int temp;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = i + 1; j < COLS; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main()
{
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Original Matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    transposeMatrix(matrix);

    printf("Transpose Matrix:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
