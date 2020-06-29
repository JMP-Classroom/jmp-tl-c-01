// JMP TechLive, by @xbluecode

#include <stdio.h>      

int main()
{
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %lu bytes\n", sizeof(a));
  printf("size of long = %lu bytes\n", sizeof(b));
  printf("size of long long = %lu bytes\n", sizeof(c));
  printf("size of long double= %lu bytes\n", sizeof(d));
  
  return 0;
}