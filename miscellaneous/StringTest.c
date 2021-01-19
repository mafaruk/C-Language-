#include <stdio.h>
int main(int argc, char const *argv[]) {
  char s[6] = {'C','D','A','\0','C'};
  printf("%s\n",s);//output:- CDA
  //\0 is nothing but end of an string
  return 0;
}
