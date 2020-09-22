// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
void jm_arrint_rem(int *, int, int);

int main () {
    int arr[6] = {1, 2, 3, 4, 5, 6};

    jm_arrint_rem(arr, 6, 4);
    return 0;
}

void jm_arrint_rem(int arr[], int size, int id) {
    for (int i = 0; i < size; i++) {
        printf((i == id) ? "%c\b": "%d " , (i == id) ? ' ' : arr[i]);
    }
}