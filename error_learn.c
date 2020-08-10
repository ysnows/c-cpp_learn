//
// Created by ysnows on 2020/8/10.
//

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


void divisorZeroError() {
    int dividend = 100;
    int divisor = 6;
    int quotient;

    if (divisor == 0) {
        fprintf(stderr, "divisor is zero, program aborted\n");
        exit(EXIT_FAILURE);
    }

    quotient = dividend / divisor;
    printf("quotient = %d\n", quotient);

    exit(EXIT_SUCCESS);


}


void printError() {
    FILE *fp = NULL;

    fp = fopen("/tmp/hello.txt", "rb");

    if (fp == NULL) {
        fprintf(stderr, "Error No is : %d\n", errno);
        perror("");
        fprintf(stderr, "Error Str is :%s\n", strerror(errno));

    } else {
        fclose(fp);
    }
}



