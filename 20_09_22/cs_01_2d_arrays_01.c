// JMP TechLive, by @xbluecode

// 2D Arrays
#include <stdio.h>
void print_mtx_int(int arr[2][3], int rows, int cols);



// Initializing 2D array
void mixin_init()
{
    int mtx1[2][3] = {
        {1, 5, 7}, // row 0
        {3, 9, 8}}; // row 1

    int mtx2[2][3] = {1, 5, 7, 3, 9, 8};

    printf("%d\n", mtx1[0][4]);

    // printf("MTX 1\n------\n");
    // print_mtx_int(mtx1, 2, 3);

    // printf("\nMTX 2\n------\n");
    // print_mtx_int(mtx2, 2, 3);
}


int main()
{
    mixin_init();
}


// Printing 2D array of int
void print_mtx_int(int arr[2][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
