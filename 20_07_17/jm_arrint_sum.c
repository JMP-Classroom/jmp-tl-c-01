// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_sum(int *, int);

int main() {
    int arr[4] = {6, 4, 21, 9};
    
    printf("%d\n", jm_arrint_sum(arr, 4));
    return 0;
}

int jm_arrint_sum(int arr[], int size) {
    int temp_sum = 0;
    for (int i = 0; i < size; i++)
        temp_sum += arr[i];
    return temp_sum;
}