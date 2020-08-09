//
// Created by ysnows on 2020/8/5.
//

#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int getNextRandom(void) {
    srand(time(NULL));
    return rand();
}

void populate_array(int *arr, size_t arrSize, int(*getRandom)(void)) {
    for (size_t i = 0; i < arrSize; i++) {
        arr[i] = getRandom();
    }
}

void funcPointerParamTest() {
    int arr[10];
    populate_array(arr, 10, &getNextRandom);

    for (int i = 0; i < 10; i++) {
        printf("%d index is %d\n", i, arr[i]);
    }

}


int funcPointerTest() {
    int (*func)(int, int) =&max;

    int a, b, c, d;
    printf("请输入三个数： ");
    scanf("%d %d %d", &a, &b, &c);

    d = func(func(a, b), c);

    printf("the max is %d", d);

}

