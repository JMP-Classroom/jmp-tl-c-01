// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_merge(int arr1[], int arr2[], int arr3[], int size1, int size2);

int main () {
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};
    int arr3[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    
    // test num 1 ~~> output : | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
    arr3[0] = jm_arrint_merge(arr1, arr2, arr3, 3, 5);
    printf("test 1:\n| ");
    for (int i = 0; i < 5+3; i++)
        printf("%d | ", arr3[i]);
    printf("\n\n");

    // test num 2 ~~> output : | 1 | 2 | 3 | 4 | 5 | 6 |
    for (int i = 0; i < 8; i++)
        arr3[i] = 0;
    arr3[0] = jm_arrint_merge(arr1, arr2, arr3, 3, 3);
    printf("test 2:\n| ");
    for (int i = 0; i < 5; i++)
        printf("%d | ", arr3[i]);
    printf("\n\n");

    // test num 3 ~~> output : | 1 | 4 | 5 |
    for (int i = 0; i < 8; i++)
        arr3[i] = 0;
    arr3[0] = jm_arrint_merge(arr1, arr2, arr3, 1, 2);
    printf("test 3:\n| ");
    for (int i = 0; i < 3; i++)
        printf("%d | ", arr3[i]);
    printf("\n\n");

    // test num 4 ~~> output : | 0 |
    for (int i = 0; i < 8; i++)
        arr3[i] = 0;
    printf("test 4:\n");
    arr3[0] = jm_arrint_merge(arr1, arr2, arr3, -1, 4);
    printf("| %d |\n\n", arr3[0]);

    // test num 5 ~~> output : | 0 |
    for (int i = 0; i < 8; i++)
        arr3[i] = 0;
    printf("test 5:\n");
    arr3[0] = jm_arrint_merge(arr1, arr2, arr3, 3, 0);
    printf("| %d |\n\n", arr3[0]);

    // test num 6 ~~> output : | 1 | 4 |
    for (int i = 0; i < 8; i++)
        arr3[i] = 0;
    arr3[0] = jm_arrint_merge(arr1, arr2, arr3, 1, 1);
    printf("test 6:\n| ");
    for (int i = 0; i < 2; i++)
        printf("%d | ", arr3[i]);
    printf("\n\n");
    return 0;
}