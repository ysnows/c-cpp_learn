//
// Created by ysnows on 2020/8/8.
//

#include "stdio.h"
#include <string.h>


struct Books {

    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} books = {"C 语言", "RUNOOB", "编程语言", 123456};


void printBook() {
    printf("title is %s author is %s subject is %s", books.title, books.author, books.subject);
}


void printBook2() {
    struct Books book;
    struct Books Book2;

    /* book 详述 */
    strcpy(book.title, "C Programming");
    strcpy(book.author, "Nuha Ali");
    strcpy(book.subject, "C Programming Tutorial");
    book.book_id = 6495407;

    /* Book2 详述 */
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Zara Ali");
    strcpy(Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;

    /* 输出 book 信息 */
    printf("Book 1 title : %s\n", book.title);
    printf("Book 1 author : %s\n", book.author);
    printf("Book 1 subject : %s\n", book.subject);
    printf("Book 1 book_id : %d\n", book.book_id);

    /* 输出 Book2 信息 */
    printf("Book 2 title : %s\n", Book2.title);
    printf("Book 2 author : %s\n", Book2.author);
    printf("Book 2 subject : %s\n", Book2.subject);
    printf("Book 2 book_id : %d\n", Book2.book_id);


}

void printBookDesc(struct Books book);

void printBookPointerDesc(struct Books *book);

void printBook3() {
    struct Books book;
    /* book 详述 */
    strcpy(book.title, "C Programming");
    strcpy(book.author, "Nuha Ali");
    strcpy(book.subject, "C Programming Tutorial");
    book.book_id = 6495407;

    printBookDesc(book);


}

void printBookPointer() {
    struct Books book;
    /* book 详述 */
    strcpy(book.title, "C Programming");
    strcpy(book.author, "Nuha Ali");
    strcpy(book.subject, "C Programming Tutorial");
    book.book_id = 6495407;

    struct Books *b;
    b = &book;

    printBookPointerDesc(b);

}


void printBookDesc(struct Books book) {
    /* 输出 book 信息 */
    printf("Book 1 title : %s\n", book.title);
    printf("Book 1 author : %s\n", book.author);
    printf("Book 1 subject : %s\n", book.subject);
    printf("Book 1 book_id : %d\n", book.book_id);

}

struct {
    int a;
    char b;
    double c;
} s1;


struct SIMPLE {
    int a;
    char b;
    double c;
};

struct SIMPLE t1, *t2, t3[100];


typedef struct {
    int a;
    char b;
    double c;
} SIMPLE;

SIMPLE a, *b, c[10];


struct COMPLEX {
    char string[100];
    struct SIMPLE a;
};

struct NODE {
    char data[100];
    struct NODE *next_node;
};


struct A;

struct B {
    struct A *a;
};

struct A {
    struct B *b;
};

void printBookPointerDesc(struct Books *book) {
    printf("title is %s\n", book->title);
    printf("author is %s\n", book->author);
    printf("subject is %s\n", book->subject);
}


struct Hello {
    int a:1;
    int b:4;
    int c:5;
} ss;
