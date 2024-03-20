#include <stdio.h>

#define ROWS 3
#define COLS 3

void searchArray(int matrix[ROWS][COLS], int target)
{
    int found = 0;

    printf("Searching for %d:\n", target);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (matrix[i][j] == target)
            {
                printf("%d is found in %dth row %dth column.\n", target, i + 1, j + 1);
                found = 1;
            }
        }
    }

    if (!found)
    {
        printf("%d is not found in the matrix.\n", target);
    }
}

int main()
{
    int matrix[ROWS][COLS] = {{1, 3, 7}, {2, 5, 3}, {3, 6, 9}};
    int target = 3;

    searchArray(matrix, target);

    return 0;
}
