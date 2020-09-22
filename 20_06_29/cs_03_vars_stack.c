// JMP TechLive, by @xbluecode

#include <stdio.h>

void func();

int main() {
  func();
  func();
  func();
}

void func() {
  static int a = 7;
  printf("%d\n",++a);
}
