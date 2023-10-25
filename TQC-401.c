#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char str1[10], str2[10];
    scanf("%s %s", &str1, &str2);
    printf("%d\n", strlen(str1));
    printf("%d\n", strlen(str2));
    printf("%s\n", strcat(str1, str2));
}