//
// Created by ysnows on 2020/8/10.
//

#include <stdio.h>
#include <stdarg.h>

double average(int num, ...);


void example() {
    double x = average(3, 2, 3, 50);

    printf("average(3, 2, 3, 50) = %g\n", x);

}


double average(int num, ...) {
    double sum = 0.0;

    va_list ap;
    va_start(ap, num);

    for (int i = 0; i < num; ++i) {
        sum += va_arg(ap, int);
    }

    va_end(ap);

    return sum / num;
}

