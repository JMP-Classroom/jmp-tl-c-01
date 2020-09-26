// include libraries
#include<stdio.h>
#include "jm_arrint_max.c"


// Function prototypes

int main() {
    int test_arr1[4] = {1, 2, -3, 4};
    int test_arr2[9] = {0, 0, 0x54, 16, -48, 45};
    int test_arr3[3] = {11, 11, 11};

    // test num 1 ~~> output : '4'
    printf("%d\n", jm_arrint_max(test_arr1, 4));

    // test num 2 ~~> output : '84'
    printf("%d\n", jm_arrint_max(test_arr2, 9));

    // test num 3 ~~> output : '11'
    printf("%d\n", jm_arrint_max(test_arr3, 3));

    // test num 4 ~~> output : '0'
    printf("%d\n", jm_arrint_max(test_arr1, 0));
    return 0;
}