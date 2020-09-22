// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
void jm_arrint_print(int *, int);

int main() {
    int arr[4] = {25, -21, 450, -97};
    
    jm_arrint_print(arr, 4);
    return 0;
}

void jm_arrint_print(int a[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d: %d\n", i, a[i]);
}