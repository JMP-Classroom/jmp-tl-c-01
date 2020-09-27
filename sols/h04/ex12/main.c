// include libraries
#include<stdio.h>
#include "jm_arrint_is_sorted.c"

// Function prototypes
int main() {
    int arr[5] = {1, 2, 3, 4 ,5};
    int arr2[3] = {3, 2, 1};

    // test num 1 ~~> output : 1
    printf("test 1:\n%d\n\n", jm_arrint_is_sorted(arr, 5, 0));

    // test num 2 ~~> output : 0
    printf("test 2:\n%d\n\n", jm_arrint_is_sorted(arr, 5, 1));

    // test num 3 ~~> output : 0
    printf("test 3:\n%d\n\n", jm_arrint_is_sorted(arr2, 3, 0));

    // test num 4 ~~> output : 1
    printf("test 4:\n%d\n\n", jm_arrint_is_sorted(arr2, 3, 1));

    // test num 5 ~~> output : 0
    printf("test 5:\n%d\n\n", jm_arrint_is_sorted(arr2, 0, 0));

    // test num 6 ~~> output : 0
    printf("test 6:\n%d\n\n", jm_arrint_is_sorted(arr2, 0, 0));

    // test num 7 ~~> output : 0
    printf("test 7:\n%d\n\n", jm_arrint_is_sorted(arr2, 3, 5));
    return 0;
}