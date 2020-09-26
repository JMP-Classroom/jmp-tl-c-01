// include libraries
#include<stdio.h>
#include "jm_arrint_copy_rev.c"

// Function prototypes
int main () {
    int arr1[4] = {26, 4, 489, 7};
    int arr2[4] = {0, 0, 0, 0};
    
    // test num 1 ~~> output : | 7 | 489 | 4 | 26 |
    arr2[0] = jm_arrint_copy_rev(arr1, arr2, 4);
    printf("test 1:\n| ");
    for (int i = 0; i < 4; i++)
        printf("%d | ", arr2[i]);
    printf("\n\n");

    // test num 2 ~~> output : | 4 | 26 |
    for (int i = 0; i < 4; i++)
        arr2[i] = 0;
    arr2[0] = jm_arrint_copy_rev(arr1, arr2, 2);
    printf("test 2:\n| ");
    for (int i = 0; i < 2; i++)
        printf("%d | ", arr2[i]);
    printf("\n\n");
    

    // test num 3 ~~> output : | 0 |
    for (int i = 0; i < 4; i++)
        arr2[i] = 0;
    arr2[0] = jm_arrint_copy_rev(arr1, arr2, 0);
    printf("test 3:\n| %d |\n\n", arr2[0]);
    return 0;
}