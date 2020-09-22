// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_search(int *, int , int);

int main () {
    int arr[5] = {3, 5, 8, 12, 48};
    
    printf("%d\n",jm_arrint_search(arr, 5, 9));
    return 0;
}

int jm_arrint_search(int arr[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == n) {
            return 1;
        }
    }
    return 0;
}