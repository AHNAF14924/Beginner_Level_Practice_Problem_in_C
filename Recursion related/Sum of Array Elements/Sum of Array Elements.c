#include <stdio.h>

int sumOfArray(int arr[], int size)
{
    if (size <= 0)
        return 0;
    else
        return arr[size - 1] + sumOfArray(arr, size - 1);
}

int main()
{
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements separated by space: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Sum of elements in the array is %d\n", sumOfArray(arr, size));
    return 0;
}
