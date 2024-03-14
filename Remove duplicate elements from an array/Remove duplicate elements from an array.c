#include <stdio.h>

void removeDuplicates(int arr[], int *n) {
    for (int i = 0; i < *n; i++) {
        for (int j = i + 1; j < *n;) {
            if (arr[j] == arr[i]) {
                for (int k = j; k < *n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*n)--;
            } else {
                j++;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    removeDuplicates(arr, &n);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
