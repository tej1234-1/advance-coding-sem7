#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello world";
    char str2[] = "world";

    if(strstr(str1, str2))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
