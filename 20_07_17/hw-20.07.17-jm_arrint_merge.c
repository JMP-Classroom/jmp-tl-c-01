#include<stdio.h>

// function
int jm_arrint_merge(int arr1[], int arr2[], int arr3[], int size1, int size2);
void print_array_int(int a[], int size);

// test
int main() {
    int s1, s2;
    printf("Array 1 ~~> Size of array : ");
    scanf("%d", &s1);
    int a1[s1];
    for (int i = 0; i < s1; i++) {
        printf("Array 1 ~~> valeu of case %d : ", i + 1);
        scanf("%d", &a1[i]);
    }
    printf("Array 2 ~~> Size of array : ");
    scanf("%d", &s2);
    int a2[s2];
    for (int i = 0; i < s2; i++) {
        printf("Array 2 ~~> valeu of case %d : ", i + 1);
        scanf("%d", &a2[i]);
    }
    int a3[s1 + s2];
    a3[-1] = jm_arrint_merge(a1, a2, a3, s1, s2);
    print_array_int(a3, s1 + s2);
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
    return arr3;
}

// print array int
void print_array_int(int a[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d | ", a[i]);
}