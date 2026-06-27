#include <stdio.h>

void callByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;

    printf("Inside Call by Value: %d %d\n", x, y);
}

void callByReference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("Inside Call by Reference: %d %d\n", *x, *y);
}

int main() {
    int a = 10, b = 20;

    callByValue(a, b);
    printf("After Call by Value: %d %d\n", a, b);

    callByReference(&a, &b);
    printf("After Call by Reference: %d %d\n", a, b);

    return 0;
}