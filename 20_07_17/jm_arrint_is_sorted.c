// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_is_sorted(int *, int, int);

int main() {
    int arr[5] = {1, 2, 3, 4 ,5};

    printf("%d\n", jm_arrint_is_sorted(arr, 5, 0));
    return 0;
}

int jm_arrint_is_sorted(int arr[], int size, int order) {
    for (int i = 1; i < size; i++) {
        if (!order && arr[i-1] > arr[i])
            return 0;
        if (order && arr[i-1] < arr[i])
            return 0;
        if (order != 1 && order != 0)
            return 0;
    }
    return 1;
}