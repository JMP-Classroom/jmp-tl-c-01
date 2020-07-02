// JMP TechLive, by @xbluecode

#include <stdio.h>

void test_for()
{
  int i;
  int m;

  printf("Enter an integer (max): ");
  scanf("%d", &m);

  for (i = 1; i <= m; i = i + 2) // i = i + 2
  {
    printf("%d ", i);
  }
  printf("\nI'm out !\n");
}

int main()
{
    test_for();
}
