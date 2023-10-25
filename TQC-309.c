#include <stdlib.h>
#include <stdio.h>
double compute(int arr[]) {
    double min = 10.0;
    int i;
    for (i=0; i<3; i++) {
        if ((double)arr[i] / arr[i+3] < min) {
            min = (double)arr[i] / arr[i+3];
        }
    }
    return min;
}
int main() {
    int i, arr[6];
    for (i=0; i<6; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%.3f\n", compute(arr));
}