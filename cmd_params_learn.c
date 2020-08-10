//
// Created by ysnows on 2020/8/10.
//

#include <stdio.h>


void example(int argc, char *argv[]) {
    printf("program is %s\n", argv[0]);

    if (argc == 2) {
        printf("the argument supplied is %s\n", argv[1]);
    } else if (argc > 2) {
        printf("too many arguments supplied");
    } else {
        printf("one argument expected\n");
    }

}

