#include<stdio.h>

// function
int jm_arrint_copy_rev(int arr1[], int arr2[], int size);
void print_array_int(int a[], int size);

// test
int main() {
    int s;
    printf("Size of array : ");
    scanf("%d", &s);
    int a1[s], a2[s];
    for (int i = 0; i < s; i++) {
        printf("valeu of case %d : ", i + 1);
        scanf("%d", &a1[i]);
    }
    a2[-1] = jm_arrint_copy_rev(a1, a2, s);
    print_array_int(a2, s);
    return 0;
}

// copy
int jm_arrint_copy_rev(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++)
        arr2[i] = arr1[i];
    return arr2;
}

// print array int
void print_array_int(int a[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d | ", a[i]);
}