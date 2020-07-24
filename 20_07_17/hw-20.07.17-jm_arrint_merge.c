#include<stdio.h>

// function
int jm_arrint_merge(int arr1[], int arr2[], int arr3[], int size1, int size2);
void print_array_int(int a[], int size);

// test
int main() {
    const int size1 = 3, size2 = 5;;
    int arr1[] = {2, -5, 9}; // | 2 | -5 | 9 |
    int arr2[] = {12, -78, -5, 14, -3}; // | 12 | -78 | -5 | 14 | -3 |
    int arr3[size1 + size2]; // | 2 | -5 | 9 | 12 | -78 | -5 | 14 | -3 |

    arr3[0] = jm_arrint_merge(arr1, arr2, arr3, size1, size2);
    print_array_int(arr3, size1 + size2);
    return 0;
}

// merge
int jm_arrint_merge(int arr1[], int arr2[], int arr3[], int size1, int size2) {
    for (int i = 0; i < size1 + size2; i++) {
        if (i < size1)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i - size1];
    }
    return *arr3;
}

// print array int
void print_array_int(int a[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d | ", a[i]);
    printf("\n");
}