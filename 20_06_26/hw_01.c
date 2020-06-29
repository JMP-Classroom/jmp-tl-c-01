/*
01. Write a program which says if a given character is alphabet (A-Z, a-z)
02. Write a program which says if a given character is uppercase alphabet (A-Z)
03. Write a program which says if a given character is lowercase alphabet (a-z)
04. Write a program which says if a given character is a number (0-9)
05. Write a program which says if a given character is a alphanum (0-9, A-Z, a-z)
06. Write a program which convert a lowercase char to uppercase char
07. Write a program which convert a uppercase char to lowercase char
*/
// a: 97, A: 65, z: 122, Z: 90
// 0: 48, 9: 57

#include <stdio.h>
/*
int is_alphabet(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
*/
int main ()
{
    printf("Enter a char: ");
    char ch;
    ch = scanf("%c", &ch);
    char new_ch = '.';

    // if (is_alphabet(ch) == 1)
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("%c is alphabet\n", ch);
    }

    if (ch >= 'A' && ch <= 90)
    {
        printf("%c is uppercase\n", ch);
        new_ch = ch - 32;
    }
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase\n", ch);
        new_ch = ch - 32;
    }
    if (ch >= 48 && ch <= 57)
    {
        printf("%c is a digit\n", ch);
    }
    if ((ch >= 65 && ch <= 90)
        || (ch >= 97 && ch <= 122)
        || (ch >= '0' && ch <= '9'))
    {
        printf("%c is alphanum\n", ch);
    }
    printf("new char is: %c\n", new_ch);
}