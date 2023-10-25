#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str1[128];
    char str2[128];
    int n, diff;
    scanf("%[^\n]%*c", &(str1));
    scanf("%[^\n]%*c", &(str2));
    scanf("%d", &n);

    if (n > strlen(str1)) {
        printf("error\n");
    } else {
        diff = strncmp(str1, str2, n);
        if (diff > 0) {
            printf("%s > %s\n", str1, str2);
        } else if (diff < 0) {
            printf("%s < %s\n", str1, str2);
        }
        else {
            printf("%s = %s\n", str1, str2);
        }
        
    }
}