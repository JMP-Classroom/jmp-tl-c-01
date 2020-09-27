// include libraries
#include "jm_arrint_sort.c"

// Function prototypes
int main () {
    int test_arr1[5] = {2, 435, 9, 13, 3};
    int test_arr2[4] = {-56, 15, 489, 0};
    
    // test num 1 ~~. output :  2 3 9 13 435
    printf("test 1:\n");
    jm_arrint_sort(test_arr1, 5, 0);
    printf("\n");

    // test num 2 ~~> output : 489 15 0 -56
    printf("test 2:\n");
    jm_arrint_sort(test_arr2, 4, 1);
    printf("\n");

    // test num 3 ~~> output : empty
    printf("test 3:\n");
    jm_arrint_sort(test_arr1, 5, 8);
    printf("\n");

    // test num 4 ~~> output : empty
    printf("test 4:\n");
    jm_arrint_sort(test_arr1, 5, -4);
    printf("\n");

    // test num 5 ~~> output : empty
    printf("test 5:\n");
    jm_arrint_sort(test_arr1, -1, 1);
    printf("\n");

    // test num 6 ~~> output : 9 3 2
    printf("test 6:\n");
    jm_arrint_sort(test_arr1, 3, 1);
    printf("\n");
    return 0;
}
