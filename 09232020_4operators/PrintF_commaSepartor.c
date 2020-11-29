#include<stdio.h>
int main(){
	 int a = 5,b = 6, c = 7;
	printf("%d \n", a, b, c);
	printf("%d \n", (a,b,c));
	printf("%d %d  %d\n", a++,a++,a++);
	printf("%d %d  %d\n", ++a,++a,++a);
	return 0;
}