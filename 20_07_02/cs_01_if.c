// JMP TechLive, by @xbluecode

#include <stdio.h>

// =============================================================================
void    test_if()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // true if number is bigger than 0
    if (number >= 0) {
        printf("You entered a %d.\n", number);
    }
    printf("I'm out !\n");
}

// =============================================================================
void test_ifelse()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // true if number is bigger than 0
    if (number >= 0) {
        printf("You entered a positive %d.\n", number);
    }
    else
    {
        printf("You entered a negative %d.\n", number);
    }
    printf("I'm out !\n");
}


// =============================================================================
void test_elseif()
{
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // true if number is bigger than 0
    if (number >= 0) {
        printf("You entered a positive %d.\n", number);
    }
    else if
    {
        printf("You entered a zero %d.\n", number);
    }
    else
    {
        printf("You entered a negative %d.\n", number);
    }
    printf("I'm out !\n");
}


// =============================================================================
int     main()
{
    test_if();
}