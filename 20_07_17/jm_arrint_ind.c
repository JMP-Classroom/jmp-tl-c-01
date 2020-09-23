// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
void jm_arrint_ind(int *, int, int, int);

int main() {
    int arr[3] = {1,3,46};
    jm_arrint_ind(arr, 3, 0, 16);
    return 0;
}

// The func must insert not replace
void jm_arrint_ind(int arr[], int size, int id, int val) {
    arr[id] = val;
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return;
}