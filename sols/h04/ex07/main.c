// include libraries
#include<stdio.h>


// Function prototypes
int jm_arrint_max(int arr[], int size);

int main() {
    int test_arr1[4] = {1, 2, -3, 4};
    int test_arr2[9] = {0, 0, 0x54, 16, -48, 45};
    int test_arr3[3] = {11, 11, 11};

    // test num 1 ~~> output : '4'
    printf("test 1:\n");
    printf("%d\n", jm_arrint_max(test_arr1, 4));
    printf("\n");

    // test num 2 ~~> output : '84'
    printf("test 2:\n");
    printf("%d\n", jm_arrint_max(test_arr2, 9));
    printf("\n");

    // test num 3 ~~> output : '11'
    printf("test 3:\n");
    printf("%d\n", jm_arrint_max(test_arr3, 3));
    printf("\n");

    // test num 4 ~~> output : '0'
    printf("test 4:\n");
    printf("%d\n", jm_arrint_max(test_arr1, 0));
    printf("\n");
    return 0;
}