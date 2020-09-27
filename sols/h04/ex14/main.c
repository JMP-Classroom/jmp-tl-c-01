// include libraries
#include<stdio.h>
#include "jm_arrint_equals.c"

// Function prototypes
int main() {
    int arr1[5] = {1, 1, 4, 3, 2};
    int arr2[5] = {1, 1, 4, 3, 2};

    // test num 1 ~~> output : 1
    printf("test 1:\n%d\n\n", jm_arrint_equals(arr1, 5, arr2, 5));

    // test num 2 ~~> output : 0
    printf("test 2:\n%d\n\n", jm_arrint_equals(arr1, 5, arr2, 0));

    // test num 3 ~~> output : 1
    printf("test 3:\n%d\n\n", jm_arrint_equals(arr1, 3, arr2, 3));

    // test num 4 ~~> output : 0
    printf("test 4:\n%d\n\n", jm_arrint_equals(arr1, 0, arr2, 0));
    return 0;
}