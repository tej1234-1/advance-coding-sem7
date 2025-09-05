#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 2;
    int count = 0;

    printf("Original Array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);

    printf("\nArray after removing %d: ", key);
    for(int i=0; i<n; i++) {
        if(arr[i] != key) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nNumber of values not equal to %d = %d\n", key, count);
    return 0;
}
