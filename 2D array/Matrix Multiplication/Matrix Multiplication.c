#include <stdio.h>

#define ROWS_A 2
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 2

void matrixMultiplication(int A[ROWS_A][COLS_A], int B[ROWS_B][COLS_B], int result[ROWS_A][COLS_B])
{
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < COLS_A; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[ROWS_A][COLS_A] = {{1, 2, 3}, {4, 5, 6}};
    int B[ROWS_B][COLS_B] = {{7, 8}, {9, 10}, {11, 12}};
    int result[ROWS_A][COLS_B];

    matrixMultiplication(A, B, result);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
