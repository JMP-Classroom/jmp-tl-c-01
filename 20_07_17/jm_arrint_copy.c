// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_copy(int *, int *, int);

int main () {
    int arr1[4] = {26, 4, 489, 7};
    int arr2[4];
    arr2[0] = jm_arrint_copy(arr1, arr2, 4);
    
    for (int i = 0; i < 4; i++)
        printf("%d ", arr2[i]);
    printf("\n");
    
    return 0;
}

int jm_arrint_copy(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++)
        arr2[i] = arr1[i];
    return *arr2;
}