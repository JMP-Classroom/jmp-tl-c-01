// include libraries
#include<stdio.h>

int jm_arrint_copy(int arr1[], int arr2[], int size);

int main () {
    int arr1[4] = {26, 4, 489, 7};
    int arr2[4] = {0, 0, 0, 0};
    
    // test num 1 ~~> output : | 26 | 4 | 489 | 7 |
    arr2[0] = jm_arrint_copy(arr1, arr2, 4);
    printf("text 1:\n| ");
    for (int i = 0; i < 4; i++)
        printf("%d | ", arr2[i]);
    printf("\n\n");

    // test num 2 ~~> output : | 26 | 4 |
    for (int i = 0; i < 4; i++)
        arr2[i] = 0;
    arr2[0] = jm_arrint_copy(arr1, arr2, 2);
    printf("test 2:\n| ");
    for (int i = 0; i < 2; i++)
        printf("%d | ", arr2[i]);
    printf("\n\n");

    // test num 3 ~~> output : | 0 |
    for (int i = 0; i < 4; i++)
        arr2[i] = 0;
    arr2[0] = jm_arrint_copy(arr1, arr2, 0);
    printf("test 3:\n| %d |\n\n", arr2[0]);
    return 0;
}