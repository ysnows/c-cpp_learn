//
// Created by ysnows on 2020/8/5.
//

#include <stdio.h>
#include <string.h>

void strOperate() {

    char *str1 = "Hello";
//    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;

//    strcpy(str3, str1);
//    printf("strcpy(str3, str1) : %s\n", str3);

//    strcat(str1, str2);
//    printf("strcat(str1,str2): %s\n", str1);


//    len = strlen(str1);
//    printf("strlen(str1) : %d\n", len);

    len = strlen(str1);
    printf("len is %d\n", len);

}

void charArrPrint() {

    //char greeting[] = "hello";

    char greetingArr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char *greetingStr = greetingArr;

    printf("arr is %p\n", greetingArr);
    printf("str is %p\n", greetingStr);

    printf("arr is %s\n", greetingArr);
    printf("str is %s\n", greetingStr);
}
