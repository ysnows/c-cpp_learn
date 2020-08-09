#include <stdio.h>

double getArrAvg(const int *arr, int size);

int main()
{

    int balance[5] = {1000, 2, 3, 17, 50};
    double avg = getArrAvg(balance, 5);
    printf("avg is %f\n", avg);

    return 0;
}

double getArrAvg(const int *arr, int size)
{

    double sum;
    double avg;

    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }

    avg = sum / size;

    return avg;
}
