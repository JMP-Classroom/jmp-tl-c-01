// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_min(int *, int);

int main() {
    int arr[4] = {1, 2, -3, 4};
    
    printf("%d\n", jm_arrint_min(arr, 4));
    return 0;
}


int jm_arrint_min(int arr[], int size) {
    int temp_min = arr[0];
    for (int i = 1; i < size; i++)
        if (temp_min > arr[i])
            temp_min = arr[i];
    return temp_min;
}