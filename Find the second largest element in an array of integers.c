#include <stdio.h>

int main()
{
    int arr[] = {5, 2, 9, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int firstMax = arr[0], secondMax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != firstMax)
        {
            secondMax = arr[i];
        }
    }
    printf("Second largest element is: %d\n", secondMax);
    return 0;
}
