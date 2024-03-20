#include <stdio.h>

#define SIZE 3

int diagonalSum(int matrix[SIZE][SIZE])
{
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += matrix[i][i];
    }
    return sum;
}

int main()
{
    int matrix[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int sum = diagonalSum(matrix);
    printf("Diagonal Sum: %d\n", sum);

    return 0;
}
