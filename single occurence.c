#include <stdio.h>

int main() {
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0;

    for(int i=0; i<n; i++) res ^= arr[i];

    printf("Number occurring once = %d\n", res);
    return 0;
}
