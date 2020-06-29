// JMP TechLive, by @xbluecode

#include <stdio.h>

void func();

int main() {
  func();
  func();
  func();
}

void func() {
  int a;
  printf("%d\n",++a);
}
