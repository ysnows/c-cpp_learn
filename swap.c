#include <stdio.h>

void swap(int *x, int *y);



int main() {

    int a = 10;
    int b = 100;
    printf("a is %d ,b is %d\n", a, b);

    swap(&a, &b);

    printf("a is %d ,b is %d\n", a, b);

    return 0;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("x is %d ,y is %d\n", *x, *y);
}