#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char fromRod, char toRod, char auxRod) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", fromRod, toRod);
        return;
    }

    towerOfHanoi(n - 1, fromRod, auxRod, toRod);  // Move n-1 disks to auxiliary
    printf("Move disk %d from %c to %c\n", n, fromRod, toRod); // Move nth disk
    towerOfHanoi(n - 1, auxRod, toRod, fromRod);  // Move n-1 disks to destination
}

int main() {
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    printf("Steps to solve Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'C', 'B');  // A = source, C = destination, B = auxiliary

    return 0;
}
