#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world. This is C.";
    char clean[200], result[200] = "";
    int j=0;

    for(int i=0; str[i]; i++) {
        if(str[i] != ',' && str[i] != '.')
            clean[j++] = str[i];
    }
    clean[j] = '\0';

    char *token = strtok(clean, " ");
    char words[50][50];
    int count = 0;
    while(token) {
        strcpy(words[count++], token);
        token = strtok(NULL, " ");
    }

    for(int i=count-1; i>=0; i--) {
        strcat(result, words[i]);
        if(i) strcat(result, " ");
    }

    printf("Reversed string: %s\n", result);
    return 0;
}
