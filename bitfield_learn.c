//
// Created by ysnows on 2020/8/9.
//

#include <stdio.h>
#include <string.h>


struct {
    unsigned int heightValid;
    unsigned int widthValid;
} status;


struct {
    unsigned int heightValid:1;
    unsigned int widthValid:1;
} status2;


struct {
    unsigned int age:3;
} Age;

void prinftFitFiel() {
    Age.age = 1;
    printf("age is %d\n", Age.age);

    Age.age = 7;
    printf("age is %d\n", Age.age);

    Age.age = 8;
    printf("age is %d\n", Age.age);

}

void printFitFieldSize() {
    printf("status size is %d\n", sizeof(status));
    printf("status2 size is %d\n", sizeof(status2));
}

