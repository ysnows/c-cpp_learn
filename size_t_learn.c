//
// Created by ysnows on 2020/8/10.
//

#include <stdio.h>
#include <stdint.h>


void printfSizeT() {

    const size_t N = 100;
    int numbers[N];

    for (size_t i = 0; i < N; ++i) numbers[i] = i;

    printf(" size max is %zu\n", SIZE_MAX);


    size_t size = sizeof numbers;

    printf("number size is %zu\n", size);

}

