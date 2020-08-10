//
// Created by ysnows on 2020/8/9.
//

#include <stdio.h>
#include <string.h>


union Data {
    int a;
    float b;
    char c[20];
};

void printUnion() {
    union Data data;
    data.a = 10;
    data.b = 200.5;
    strcpy(data.c, "hello");

    printf("a = %d\n", data.a);
    printf("b = %f\n", data.b);
    printf("C.md = %s\n", data.c);

}

void printUnion2() {
    union Data data;
    data.a = 10;
    printf("a = %d\n", data.a);

    data.b = 200.5;
    printf("b = %f\n", data.b);

    strcpy(data.c, "hello");
    printf("C.md = %s\n", data.c);

}

void printUnionSize() {

    union Data data;
    printf("union size is %zu\n", sizeof(data));
}







