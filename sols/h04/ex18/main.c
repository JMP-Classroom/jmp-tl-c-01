// include libraries
#include <stdio.h>

// Function prototypes
void jm_arrint_print_unique(int arr[], int size);

int main() {
    int test_arr1[4] = {1, 1, 15, 4};
    int test_arr2[5] = {5, 6, 4, 8, 9};
    int test_arr3[3] = {5, 5, 5};

    // test num 1 ~~> output : 15 4
    printf("test 1 ~~> ");
    jm_arrint_print_unique(test_arr1, 4);
    printf("\n");

    // test num 2 ~~> output : 5 6 4 8 9
    printf("test 2 ~~> ");
    jm_arrint_print_unique(test_arr2, 5);
    printf("\n");

    // test num 3 ~~> output : Empty
    printf("test 3 ~~> ");
    jm_arrint_print_unique(test_arr3, 3);
    printf("\n");

    // test num 4 ~~> output : Empty
    printf("test 4 ~~> ");
    jm_arrint_print_unique(test_arr1, -5);
    printf("\n");
    return 0;
}