#define GRADE(a,b) a##b
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a = 400, b = 800, ab = 600;
  printf("%d\n",ab+GRADE(a,b));
  return 0;
}
