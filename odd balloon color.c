#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char ar[n + 1];
    scanf("%s", ar);

    int freq[n];
    for (int i = 0; i < n; i++) {
        freq[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (ar[i] == ar[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            if (count % 2 != 0) {
                printf("%c", ar[i]);
                return 0;
            }
        }
    }
    printf("All Are Even Numbers");
    return 0;
}
