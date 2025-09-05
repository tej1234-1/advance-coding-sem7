#include <stdio.h>
#include <string.h>

int isSubsequence(char *s1, char *s2) {
    int i=0, j=0;
    while(s1[i] && s2[j]) {
        if(s1[i] == s2[j]) j++;
        i++;
    }
    return (s2[j] == '\0');
}

int main() {
    char str1[] = "abcde";
    char str2[] = "ace";

    if(isSubsequence(str1, str2))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
