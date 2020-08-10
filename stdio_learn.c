//
// Created by ysnows on 2020/8/10.
//

#include <stdio.h>

void formatIo() {
    char str[100];
    int a;
    printf("Enter a Value: \n");
    scanf("%s %d", str, &a);
    printf("You enter:\n");
    printf("str:%s\n a:%d\n", str, a);
}

void getsPuts() {
    char str[100];
    printf("Enter a Value: \n");
    gets(str);
    printf("You enter:\n");
    puts(str);
}

void charIo() {
    printf("Enter a value");
    int a = getchar();
    printf("\n you enter:");
    putchar(a);
    printf("\n");
}


