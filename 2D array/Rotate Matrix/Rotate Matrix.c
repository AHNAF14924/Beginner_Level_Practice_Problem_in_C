#include <stdio.h>

#define SIZE 3

void rotateMatrixClockwise(int matrix[SIZE][SIZE])
{
    for (int layer = 0; layer < SIZE / 2; layer++)
    {
        int first = layer;
        int last = SIZE - 1 - layer;

        for (int i = first; i < last; i++)
        {
            int offset = i - first;
            int top = matrix[first][i];

            // left -> top
            matrix[first][i] = matrix[last - offset][first];

            // bottom -> left
            matrix[last - offset][first] = matrix[last][last - offset];

            // right -> bottom
            matrix[last][last - offset] = matrix[i][last];

            // top -> right
            matrix[i][last] = top;
        }
    }
}

void rotateMatrixAntiClockwise(int matrix[SIZE][SIZE])
{
    for (int layer = 0; layer < SIZE / 2; layer++)
    {
        int first = layer;
        int last = SIZE - 1 - layer;

        for (int i = first; i < last; i++)
        {
            int offset = i - first;
            int top = matrix[first][i];

            // right -> top
            matrix[first][i] = matrix[i][last];

            // bottom -> right
            matrix[i][last] = matrix[last][last - offset];

            // left -> bottom
            matrix[last][last - offset] = matrix[last - offset][first];

            // top -> left
            matrix[last - offset][first] = top;
        }
    }
}

void displayMatrix(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Original Matrix:\n");
    displayMatrix(matrix);

    printf("\nMatrix after rotating 90 degrees clockwise:\n");
    rotateMatrixClockwise(matrix);
    displayMatrix(matrix);

    printf("\nMatrix after rotating 90 degrees anticlockwise:\n");
    rotateMatrixAntiClockwise(matrix);
    displayMatrix(matrix);

    return 0;
}
