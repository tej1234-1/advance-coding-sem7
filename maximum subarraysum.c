#include <stdio.h>

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum = arr[0], currSum = arr[0];

    for(int i=1; i<n; i++) {
        if(currSum < 0) currSum = arr[i];
        else currSum += arr[i];
        if(currSum > maxSum) maxSum = currSum;
    }

    printf("Maximum subarray sum = %d\n", maxSum);
    return 0;
}
