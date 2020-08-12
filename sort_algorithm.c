#include <stdio.h>


void bubbleSort(int *arr, int len);

void selectionSort(int *arr, int len);

void insertionSort(int *arr, int len);

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void example() {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};

    int len = sizeof(arr) / sizeof(*arr);

//    bubbleSort(arr, len);
//    selectionSort(arr, len);
    insertionSort(arr, len);


    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

}

void selectionSort(int *arr, int len) {
    for (int i = 0; i < len; ++i) {
        int minPos = i;
        for (int j = i + 1; j < len; ++j) {
            if (arr[j] < arr[minPos]) {
                minPos = j;
            }
        }
        swap(&arr[i], &arr[minPos]);
    }
}

void insertionSort(int *arr, int len) {
    int i, j, temp;
    for (i = 1; i < len; i++) {
        temp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > temp; j--) {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}


