//
// Created by ysnows on 2020/8/10.
//
#include <stdio.h>

void byteIO() {
//    fwrite();
//    fread();

}

void fileRead() {
    FILE *fp = NULL;
    fp = fopen("/tmp/hello.txt", "r");
    char buffer[255];

    fscanf(fp, "%s", buffer);
    printf("%s\n", buffer);

    fgets(buffer, 255, fp);
    printf("%s\n", buffer);

    fgets(buffer, 255, fp);
    printf("%s\n", buffer);

}

void fileIO() {
    FILE *file = NULL;

    file = fopen("/tmp/hello.txt", "w+");

    fprintf(file,
            "Hello %s\n", "World");

    fputs("Hello fputs\n", file);

    fclose(file);

}

