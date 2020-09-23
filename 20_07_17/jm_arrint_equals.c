// Solve Homework By @proXDhiya

// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_equals(int *, int, int *, int);

int main() {
    int arr1[3] = {2, 5, 4};
    int arr2[5] = {1, 1, 4, 3, 2};
    printf("%d\n", jm_arrint_equals(arr1, 3, arr2, 5));
    return 0;
}

// The should compare between elements not sums
int jm_arrint_equals(int arr1[], int size1, int arr2[], int size2){
    int temp_arr1_sum = 0;
    int temp_arr2_sum = 0;

    for (int i = 0; i < size1; i++)
        temp_arr1_sum += arr1[i];
    for (int i = 0; i < size2; i++)
        temp_arr2_sum += arr2[i];
    return (temp_arr2_sum == temp_arr1_sum) ? 1 : 0;
}