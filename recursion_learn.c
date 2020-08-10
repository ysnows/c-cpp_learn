//
// Created by ysnows on 2020/8/10.
//
#include <stdio.h>

/*阶乘*/
int factorial(unsigned int n) {
    if (n <= 0) return 1;
    return n * factorial(n - 1);
}

/*斐波那契数列*/
int fibonaci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonaci(n - 1) + fibonaci(n - 2);

}


