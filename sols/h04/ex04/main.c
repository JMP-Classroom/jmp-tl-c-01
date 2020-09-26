// include libraries
#include "jm_arrint_sum.c"

// Function prototypes
int main() {
    int arr[4] = {6, 4, 21, 9};
    
    // test num 1 ~~> output : 40
    printf("test 1:\n");
    printf("%d\n", jm_arrint_sum(arr, 4));
    printf("\n");

    // test num 2 ~~> output : 31
    printf("test 2:\n");
    printf("%d\n", jm_arrint_sum(arr, 3));
    printf("\n");

    // test num 3 ~~> output : 6
    printf("test 3:\n");
    printf("%d\n", jm_arrint_sum(arr, 1));
    printf("\n");

    // test num 4 ~~> output : 0
    printf("test 5:\n");
    printf("%d\n", jm_arrint_sum(arr, 0));
    printf("\n");

    // test num 5 ~~> output : 0
    printf("test 5:\n");
    printf("%d\n", jm_arrint_sum(arr, -9));
    printf("\n");
    return 0;
}