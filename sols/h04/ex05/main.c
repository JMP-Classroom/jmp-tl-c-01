// include libraries
#include <stdio.h>
#include "jm_arrint_avg.c"

// Function prototypes
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    
    // test num 1 ~~> output : 3
    printf("test 1:\n");
    printf("%d\n", jm_arrint_avg(arr, 5));
    printf("\n");

    // test num 2 ~~> output : 2
    printf("test 2:\n");
    printf("%d\n", jm_arrint_avg(arr, 3));
    printf("\n");

    // test num 3 ~~> output : 0
    printf("test 3:\n");
    printf("%d\n", jm_arrint_avg(arr, 0));
    printf("\n");

    // test num 4 ~~> output : 2
    printf("test 4:\n");
    printf("%d\n", jm_arrint_avg(arr, 4));
    printf("\n");

    // test num 5 ~~> output : 1
    printf("test 5:\n");
    printf("%d\n", jm_arrint_avg(arr, 2));
    printf("\n");
    return 0;
}