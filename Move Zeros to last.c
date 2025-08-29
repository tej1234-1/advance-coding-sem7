#include <stdio.h>

void moveZeros(int arr[], int n) {
    int counter = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[counter] = arr[i];
            counter++;
        }
    }
    while (counter < n) {
        arr[counter] = 0;
        counter++;
    }
}
int main() {
    int a[] = {1, 0, 2, 0, 3, 0, 4};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    moveZeros(a, n);
    printf("Array after moving zeros: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
