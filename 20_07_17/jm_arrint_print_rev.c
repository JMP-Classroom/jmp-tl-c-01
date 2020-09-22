// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
void jm_arrint_print_rev(int *, int);

int main() {
    int arr[4] = {25, -21, 450, -97};
    
    jm_arrint_print_rev(arr, 4);
    return 0;
}

void jm_arrint_print_rev(int a[], int size) {
    for (int i = size - 1; i >= 0; i--)
        printf("%d: %d\n", i, a[i]);
}