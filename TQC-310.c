#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int compute(int n) {
    int count = 0, total = 0, arr[3], i;
    while (n > 0) {
        arr[count] = n % 10;
        n /= 10;
        count++;
    }
    for (i=0; i<count; i++) {
        total += pow(arr[i], count);
    }
    return total;
}
int main() {
    int i, n, total = 0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        if (i == compute(i)) {
            printf("%d\n", i);
            total += i;
        }
    }
    printf("%d\n", total);
}