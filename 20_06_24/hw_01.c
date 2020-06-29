// JMP TechLive, by @xbluecode

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("char store values from %d to %d", CHAR_MIN, CHAR_MAX);
    printf("\n unsigned char store values from 0 to %u", UCHAR_MAX); 
    printf("\n int store values from %d to %d ", INT_MIN,INT_MAX );
    printf("\n unsigned  int store values from 0 to %u ", UINT_MAX );
    printf("\n short store values from %d to %d ", SHRT_MIN,SHRT_MAX );
    printf("\n unsigned short store values from 0 to %u ", USHRT_MAX );
    printf("\n long store values from %ld to %ld ", LONG_MIN,LONG_MAX );
    printf("\n unsigned long store values from 0 to %lu \n", ULONG_MAX );

    char less_crazy = CHAR_MAX - 5; // 122

    char crazy_1 = CHAR_MIN - 1 - 127;
    char crazy_2 = less_crazy + 8; 
    printf("crazy 1: %d\n", crazy_1);
    printf("crazy 2: %d\n", crazy_2);

}
