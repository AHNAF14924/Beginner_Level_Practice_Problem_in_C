#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int size)
{
    if (size <= 1)
        return true;
    if (arr[size - 1] < arr[size - 2])
        return false;
    return isSorted(arr, size - 1);
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
    if (isSorted(arr, size))
        printf("Array is sorted.\n");
    else
        printf("Array is not sorted.\n");
    return 0;
}
