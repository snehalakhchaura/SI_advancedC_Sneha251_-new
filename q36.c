//sum and average of array elements 
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float avg;
    printf("Enter size: ");
       scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
     scanf("%d", &a[i]);
        sum = a[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\nAverage = %.2f", sum, avg);

    return 0;
}