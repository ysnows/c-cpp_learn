#include <stdio.h>


int main() {

    /* 带有 5 个元素的整型数组 */
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

    double *p;

    p = balance;

    for (int i = 0; i < 5; ++i) {
        printf("*(p+%d)=%f\n", i, *(p + i));
    }

    for (int i = 0; i < 5; ++i) {
//        printf("*(p+%d)=%f\n", i, *(balance + i));
    }

    return 0;
}



