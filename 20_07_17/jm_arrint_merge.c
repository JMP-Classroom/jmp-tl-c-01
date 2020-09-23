// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_merge(int *, int *, int *, int, int);

int main () {
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};
    int arr3[8];
    arr3[0] = jm_arrint_merge(arr1, arr2, arr3, 3, 5);

    for (int i = 0; i < 5+3; i++)
        printf("%d ", arr3[i]);
    printf("\n");
    return 0;
}

// True but it does more operations
int jm_arrint_merge(int arr1[], int arr2[], int arr3[], int size1, int size2) {
    for (int i = 0; i < size1 + size2; i++)
        arr3[i] = (i < size1) ? arr1[i] : arr2[i - size1];
    return *arr3;
}