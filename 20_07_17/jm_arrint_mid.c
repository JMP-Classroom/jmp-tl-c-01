// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_mid(int *, int);

int main () {
    int arr[4] = {2, 6, 15, 20};
    
    printf("%d\n", jm_arrint_mid(arr, 4));
    return 0;
}

int jm_arrint_mid(int arr[], int size) {
    return (size%2 == 0) ? (arr[size/2] + arr[size/2 -1])/2 : arr[size/2];
}