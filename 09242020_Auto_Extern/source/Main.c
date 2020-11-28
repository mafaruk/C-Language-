#include<stdio.h>
#include "add.h"
extern int a;
int main(){
	int value;
	value = increament();
	printf("%d \n",value);
	printf("%d \n",a);
	return 0;
}