#include <stdio.h>

#define ROWS 4
#define COLS 4

void printSpiral(int matrix[ROWS][COLS], int m, int n)
{
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main()
{
    int matrix[ROWS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    printf("Spiral Matrix:\n");
    printSpiral(matrix, ROWS, COLS);

    return 0;
}
