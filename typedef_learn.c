//
// Created by ysnows on 2020/8/9.
//

#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0


typedef unsigned char BYTE;


typedef struct Books {
    char title[256];
    char author[256];
    char subject[256];
    int book_id;

} Book;

void printTypedefStruct() {
    Book book;

    printf("TRUE is %d\n", TRUE);
    printf("FALSE is %d\n", FALSE);

}


void printTypedef() {
    BYTE b1, b2, b3;
    printf(" BYTE size: %zu\n", sizeof(BYTE));
}
