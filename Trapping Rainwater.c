#include <stdio.h>

int trapRainWater(int height[], int n) {
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left <= right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                water += leftMax - height[left];
            left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                water += rightMax - height[right];
            right--;
        }
    }
    return water;
}

int main() {
    int n;
    printf("Enter number of bars: ");
    scanf("%d", &n);

    int height[n];
    printf("Enter heights of bars: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &height[i]);

    int trappedWater = trapRainWater(height, n);
    printf("Total trapped rainwater: %d\n", trappedWater);

    return 0;
}
