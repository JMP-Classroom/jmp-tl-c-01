// include libraries
#include<stdio.h>

// Function prototypes
int jm_arrint_mid(int arr[], int size);

int main () {
    int arr[4] = {2, 6, 15, 20};
    
    // test num 1 ~~> output : 10
    printf("test 1:\n");
    printf("%d\n", jm_arrint_mid(arr, 4));
    printf("\n");

    // test num 2 ~~> output : 6
    printf("test 2:\n");
    printf("%d\n", jm_arrint_mid(arr, 3));
    printf("\n");

    // test num 3 ~~> output : 2
    printf("test 3:\n");
    printf("%d\n", jm_arrint_mid(arr, 1));
    printf("\n");

    // test num 4 ~~> output : 0
    printf("test 4:\n");
    printf("%d\n", jm_arrint_mid(arr, 0));
    printf("\n");

    // test num 5 ~~> output : 0
    printf("test 5:\n");
    printf("%d\n", jm_arrint_mid(arr, -2));
    printf("\n");
    return 0;
}