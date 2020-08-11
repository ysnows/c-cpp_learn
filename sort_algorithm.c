#include <stdio.h>


void bubbleSort(int *arr, int len);

void selectionSort(int *arr, int len);

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubbleSortExample() {
    int arr[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};

    int len = sizeof(arr) / sizeof(*arr);

    bubbleSort(arr, len);

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


}


