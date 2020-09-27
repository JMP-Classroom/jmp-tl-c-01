// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_min(int arr[], int size);

int main() {
    int arr[4] = {1, 2, -3, 4};

    //  test num 1 ~~> output : -3
    printf("test 1:\n");
    printf("%d\n", jm_arrint_min(arr, 4));
    printf("\n");

    //  test num 2 ~~> output : 1
    printf("test 2:\n");
    printf("%d\n", jm_arrint_min(arr, 2));
    printf("\n");

    //  test num 3 ~~> output : 0
    printf("test 3:\n");
    printf("%d\n", jm_arrint_min(arr, 0));
    printf("\n");

    //  test num 4 ~~> output : 1
    arr[2] = 6;
    printf("test 4:\n");
    printf("%d\n", jm_arrint_min(arr, 4));
    printf("\n");

    //  test num 5 ~~> output : 0
    printf("test 5:\n");
    printf("%d\n", jm_arrint_min(arr, -4));
    printf("\n");
    return 0;
}
