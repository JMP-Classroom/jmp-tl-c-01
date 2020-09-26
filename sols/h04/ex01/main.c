// include libraries
#include "jm_arrint_print.c"

// Function prototypes

int main() {
    int test_arr1[4] = {25, -21, 450, -97};
    
    // test num 1 ~~> output :
    //  0: 25
    //  1: -21
    //  2: 450
    //  3: -97
    printf("test 1:\n");
    jm_arrint_print(test_arr1, 4);
    printf("\n");

    // test num 2 ~~> output :
    //  0: 25
    //  1: -21
    printf("test 2:\n");
    jm_arrint_print(test_arr1, 2);
    printf("\n");

    // test num 3 ~~> output : Empty output
    printf("test 3:\n");
    jm_arrint_print(test_arr1, 0);
    printf("\n");

    // test num 4 ~~> output : Empty output
    printf("test 4:\n");
    jm_arrint_print(test_arr1, -3);
    printf("\n");
    return 0;
}