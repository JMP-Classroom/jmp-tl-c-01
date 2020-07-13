// JMP TechLive, by @xbluecode

// Local Variables

#define SIZE 6
#include <stdio.h>

void test1();
void test2();
void test3();
void test4();
void test5();
void print_array_int(int a[], int size);

int main()
{
    test1();
    test2();
    test3();
    test4();
}


// =========================================================
void test1()
{
    int arr[5] = {45, 31, 010, 10, -15};

    for (int i = 0; i < 5; i++)
    {
        printf("%d | ", arr[i]);
    }
    printf("\n");
}


// =========================================================
void test2()
{
    int arr[] = {0x23, 23, -5, 0b11, 31, -90};
    print_array_int(arr, 6);
    printf("\n");
}


// =========================================================
void test3()
{
    int     arr_num[5]  = {45, 31, 010, 10, -15};
    char    arr_ch[5]   = {'H', 'e', 'l', 'l', 'o'};

    for (int i = 0; i < 5; i++)
    {
        // printf("%p | %p\n", &arr_num[i], &arr_ch[i]);
        printf("%u | %u\n", &arr_num[i], &arr_ch[i]);
    }
    printf("\n");
}

// =========================================================
void test4()
{
    int arr[] = {0x23, 23, -5, 0b11, 31, -90};
    arr[2] = 500;
    arr[5] = -990;
    print_array_int(arr, 6);
    printf("\n");
}


// =========================================================
void test5()
{
    int arr[] = {0x23, 23, -5, 0b11, 31, -90};
    printf("%d\n", arr[9]);
    print_array_int(arr, 12);
    printf("\n");
}

// =========================================================
void print_array_int(int a[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d | ", a[i]);
}