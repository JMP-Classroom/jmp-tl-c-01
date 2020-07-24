#include<stdio.h>

// function
int jm_arrint_equals(int arr1[], int size1, int arr2[], int size2);

// test
int main() {
    const int size1 = 3;
    const int size2 = 5;
    int arr1[] = {5, 8, 11};
    int arr2[] = {8, 12, -4, 78, -90};
    
    int equal = jm_arrint_equals(arr1, size1, arr2, size2);
    // ternary expression
    // printf((condition) ? "true" : "false");
    printf((equal == 1) ? "Array 1 and Array 2 are equals!\n" : "Array 1 and Array 2 are not equals!\n" );
    return 0;
}

// equal
int jm_arrint_equals(int arr1[], int size1, int arr2[], int size2) {
    int temp_sum1 = 0;
    int temp_sum2 = 0;
    for (int i = 0; i < size1; i++)
        temp_sum1 += arr1[i];
    for (int i = 0; i < size2; i++)
        temp_sum2 += arr2[i];
    if (temp_sum1 == temp_sum2)
        return 1;
    else
        return 0;
}