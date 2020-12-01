#include<stdio.h>
int fun();
int fun(int); // declartion of two function with same name does not give any error but defination of two function with same name does 
int main(){
   printf(fun());
   printf(fun(1));
}
