#include <stdio.h>

int main()
{
    int x = 5;
    int arr[] = {4, 7, 9, 2, 5};
    int *ptr;

    /*
    ptr = arr; // ptr = &arr[0];
    printf("%d :: %d\n", arr + 1, &arr[1]);

    printf("target value: %d\n", *ptr);

    ptr++;
    printf("target value: %d\n", *ptr);
    */
    
    
    ptr = &arr[2];
    printf("<ptr + 2> target value: %d\n",  *(ptr + 2));
    printf("<ptr + 1> target value: %d\n",  *(ptr + 1));
    printf("<ptr + 0> target value: %d\n",  *ptr);
    printf("<ptr - 2> target value: %d\n",  *(ptr - 1));
    printf("<ptr - 2> target value: %d\n",  *(ptr - 2));
    printf("---------\n");
    printf("<ptr + 2> target value: %d\n",  ptr[2]);
    printf("<ptr + 1> target value: %d\n",  ptr[1]);
    printf("<ptr + 0> target value: %d\n",  ptr[0]);
    printf("<ptr - 2> target value: %d\n",  ptr[-1]);
    printf("<ptr - 2> target value: %d\n",  ptr[-2]);

}
