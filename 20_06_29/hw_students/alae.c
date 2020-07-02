/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int max (int A, int B)
{
    if(A>B){
    return(A);
    }
    else{
    return(B);
    }
}



int min (int A, int B)
{
    if(A<B)
    return(A);
    else
    return(B);
}



int mid (int A, int B, int C)
{
    if(A>B && A<C)
    return(A);
    else if(B>A && B<C)
    return(B);
    else
    return(C);
}



int get_parity (int A)
{
    int c = A % 2;
    if (c = 0)
    return(1);
    else
    return(0);
}



int in_range (int A, int B, int C)
{
    if(A>B && A<C)
    return(1);
    else
    return(0);
}



int is_multi (int D, int F)
{
   int c = F%D;
    if (c = 0)
    return(1);
    else
    return(0); 
}



int main()
{
    int n1, n2, n3,n4,n5,n6,n7,n8,l, d1, d2, n, m, res,a,b,c,d,e,f;
    printf("enter two number:\n");
    scanf ("%d ", &n1  );
    scanf ("%d ", &n2  );
    a=max(n1,n2);
      
          printf ("the biggest num is :%d\n " , a );
//.........................................................

   printf("enter two number:\n");
    scanf ("%d ", &n3  );
    scanf ("%d ", &n4 );
    b=min(n3,n4);
      
          printf ("the smallest num is :%d \n" , b );
//..........................................................

    printf("enter three number:\n");
    scanf ("%d ", &n5  );
    scanf ("%d ", &n6  );
    scanf ("%d ", &n7  );
    c=mid(n5,n6,n7);
      
          printf ("the middle num is :%d \n " , c );
//..........................................................

     printf("enter one number:\n");
    scanf ("%d ", &n8 );
    d=get_parity(n8);
        if(d = 1){
          printf ("this number is even \n");
        }
        else{
          printf ("this number is odd\n ");
        }
//..........................................................

    printf("enter one number:\n");
    scanf ("%d ", &n);
    printf("enter range:\n");
    scanf ("%d ", &d1  );
    scanf ("%d ", &d2  );
    e =in_range(n,d1,d2);
    if(e =1){
        printf ("This number belongs to the range \n "  );
    }
    else{
        printf ("This number doesn't belongs to the range \n "  );
    }
//..............................................................

    printf("enter two number:\n");
    scanf ("%d ", &l );
    scanf ("%d ", &m );
    f=is_multi(l,m);
        if(f = 1){
          printf ("%d is a multiplication of %d \n",m, l);
        }
        else{
          printf ("%d is not a multiplication of %d \n", m , l);
        }
}

