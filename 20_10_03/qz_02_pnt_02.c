#include <stdio.h>

// Quiz: Predict the output of this program (without exec)
int main()
{
    int mtx[][3] = {
        {19, 28, 37},
        {46, 55, 64},
        {73, 82, 91}
        };
    
    int n = *(*(mtx + 1) + 2);

    printf("n: %d\n",  n);

}