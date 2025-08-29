#include <stdio.h>

void removeDuplicates(int arr[], int n) {
    int result[n];
    int size = 0;

    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == result[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            result[size] = arr[i];
            size++;
        }
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nFinal array (without duplicates): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 3, 2, 3, 4, 1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);
    return 0;
}
