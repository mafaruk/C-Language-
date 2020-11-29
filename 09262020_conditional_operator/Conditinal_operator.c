#include<stdio.h>
int main(){
	int var = 75;
	int var1 = 26;
	int num;
	
	num = sizeof(var) ? (var1>23 ? (var == 75?'Y':0) :0):0;
	printf("%d \n",num);
	printf("%c \n",num);
}