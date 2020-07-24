#include<stdio.h>

// function
int jm_arrint_copy_rev(int arr1[], int arr2[], int size);
void print_array_int(int a[], int size);

// test
int main() {
    const int size = 3;
    int arr1[] = {-5, 8, 12}; // | -5 | 8 | 12 |
    int arr2[size]; // | 12 | 8 | -5 |

    arr2[0] = jm_arrint_copy_rev(arr1, arr2, size);
    print_array_int(arr2, size);
    return 0;
}

// copy
int jm_arrint_copy_rev(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        arr2[i] = arr1[size - i - 1];
    }
    // we use pointer here to return the array valeu
    return *arr2;
}

// print array int
void print_array_int(int a[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d | ", a[i]);
    printf("\n");
}