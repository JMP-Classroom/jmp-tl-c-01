// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_max(int *, int);

int main() {
    int arr[4] = {1, 2, -3, 4};
    
    printf("%d\n", jm_arrint_max(arr, 4));
    return 0;
}

// Check the naming
int jm_arrint_max(int arr[], int size) {
    int temp_min = arr[0];
    for (int i = 1; i < size; i++)
        if (temp_min < arr[i])
            temp_min = arr[i];
    return temp_min;
}