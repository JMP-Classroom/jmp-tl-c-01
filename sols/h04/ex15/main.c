// include libraries
#include "jm_arrint_rot.c"

// Function prototypes
int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // test num 1 ~~> output : 4 5 1 2 3
    printf("test 1 ~~> ");
    jm_arrint_rot(arr, 5, 2, 0);
    printf("\n");

    // test num 2 ~~> output : 5 1 2 3 4
    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;
    printf("test 2 ~~> "); 
    jm_arrint_rot(arr, 5, 3, 1);
    printf("\n");

    // test num 3 ~~> output : empty
    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;
    printf("test 3 ~~> ");
    jm_arrint_rot(arr, 0, 1, 1);
    printf("\n");

    // test num 4 ~~> output : 1 2 3 4 5
    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;
    printf("test 4 ~~> ");
    jm_arrint_rot(arr, 5, 5, 0);
    printf("\n");

    // test num 5 ~~> output : 1 2 3 4 5
    for (int i = 0; i < 5; i++)
        arr[i] = i + 1;
    printf("test 5 ~~> ");
    jm_arrint_rot(arr, 5, 5, 1);
    printf("\n");
    return 0;
}