// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_avg(int *, int);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", jm_arrint_avg(arr, 5));
    return 0;
}

int jm_arrint_avg(int arr[], int size) {
    int temp_avg = 0;
    for (int i = 0; i < size; i++)
        temp_avg += arr[i];
    temp_avg /= size;
    return temp_avg;
}