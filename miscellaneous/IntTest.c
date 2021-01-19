#include <stdio.h>
void arrayTest(){
  int ptr[10] = {10,20,30,40,50};
  printf("%d\n", *(ptr+1));
  printf("%d\n", *ptr+2);

}

int main(int argc, char const *argv[]) {
  int x = 0||5;
  printf("%d\n",x );
  arrayTest();
  return 0;
}
