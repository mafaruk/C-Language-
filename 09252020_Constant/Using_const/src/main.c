#include<stdio.h>
extern int a;
int main(){
	const int b = 4;
	
	//b = 3;///gives error as a is defined as constant 
	printf("%d  %d",a,b);
}