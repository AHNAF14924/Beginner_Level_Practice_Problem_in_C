#include <stdio.h>

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);
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
    reverseArray(arr, 0, size - 1);
    printf("Reversed array: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
