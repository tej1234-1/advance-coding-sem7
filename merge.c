#include <stdio.h>
#include <string.h>

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    FILE *f3 = fopen("file3.txt", "w");
    char str1[100], str2[100], str3[200];
    int i=0, j=0, k=0;

    fscanf(f1, "%s", str1);
    fscanf(f2, "%s", str2);

    while(str1[i] && str2[j]) {
        str3[k++] = str1[i++];
        str3[k++] = str2[j++];
    }
    while(str1[i]) str3[k++] = str1[i++];
    while(str2[j]) str3[k++] = str2[j++];
    str3[k] = '\0';

    fprintf(f3, "%s", str3);
    fclose(f1); fclose(f2); fclose(f3);

    printf("Merged string written to file3.txt\n");
    return 0;
}
