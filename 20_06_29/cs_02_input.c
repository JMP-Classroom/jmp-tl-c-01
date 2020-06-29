// JMP TechLive, by @xbluecode

#include <stdio.h>

int main()
{
    float num1;
    double num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);

    printf("Enter two numbers: ");
    scanf("%f %lf", &num1, &num2);
    
    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);

    return 0;
}