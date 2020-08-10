//
// Created by ysnows on 2020/8/10.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void example1() {
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = (char *) malloc(30 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student.");
    }
    /* 假设您想要存储更大的描述信息 */
//    description = (char *) realloc(description, 100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcat(description, "She is in class 10th");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);

    /* 使用 free() 函数释放内存 */
    free(description);
}

/*allocate memory*/
void example() {
    char name[100];
    char *description;

    strcpy(name, "Zara Ali\n");

    description = (char *) malloc(30 * sizeof(char));

    printf("%zu bytes\n", sizeof(description));

    if (description == NULL) {
        fprintf(stderr, "Error - failed to allocate memory");
        exit(EXIT_SUCCESS);
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }

//    description = realloc(description, 100 * sizeof(char));


    strcat(description, "Hello World");

    printf("%zu bytes\n", sizeof(description));


    printf("name: %s\n", name);
    printf("description: %s\n", description);

    free(description);

}
