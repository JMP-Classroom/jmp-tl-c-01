// JMP TechLive, by @xbluecode

#include <stdio.h>

int main()
{
    int number, sum = 0;

    for(int i=0; i < 5; ++i)
    {
        printf("Enter a n%d: ",i);
        scanf("%d",&number);

        // If the user enters a negative number, the loop ends
        if(number < 0)
        {
            continue;
        }

        sum += number; // sum = sum + number;
    }

    printf("Sum = %d",sum);
    
    return 0;
}