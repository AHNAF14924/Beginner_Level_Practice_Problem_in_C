#include <stdio.h>

int main()
{
    int arr[] = {3, 1, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    float median;
    if (n % 2 == 0)
    {
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
    else
    {
        median = arr[n / 2];
    }
    printf("Median is: %.2f\n", median);
    return 0;
}
