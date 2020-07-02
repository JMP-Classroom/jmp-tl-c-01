// JMP TechLive, by @xbluecode

#include <stdio.h>

void test_while()
{
  int i;
  int m;

  printf("Enter an integer (max): ");
  scanf("%d", &m);

  i = 1;
  while (i < m) // inc
  {
    printf("%d ", i);
    i++;
  }
  printf("\nI'm out !\n");
}

// =============================================================================
void test_dowhile()
{
  int i;
  int m;

  printf("Enter an integer (max): ");
  scanf("%d", &m);

  i = 1;
  do
  {
    printf("%d ", i);
    i++;
  }
  while (i < m);
  printf("\nI'm out !\n");
}

// =============================================================================
int main()
{
    // test_while();
    test_dowhile();
}