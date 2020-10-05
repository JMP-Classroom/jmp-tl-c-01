#include <stdio.h>

int main()
{
    int i = 7;
    char c = 'A';
    short s = 10;

    int *i_ptr = &i;
    char *c_ptr = &c;
    short *s_ptr = &s;

    int *new_i_ptr;
    char *new_c_ptr;
    short *new_s_ptr;

    new_i_ptr = i_ptr + 1;
    new_c_ptr = c_ptr + 1;
    new_s_ptr = s_ptr + 1;

    printf("i_ptr: %d | new_i_ptr: %d\n---\n", i_ptr, new_i_ptr);
    printf("c_ptr: %d | new_c_ptr: %d\n---\n", c_ptr, new_c_ptr);
    printf("s_ptr: %d | new_s_ptr: %d\n", s_ptr, new_s_ptr);
}
