#include<stdio.h>
int main(){
	int x = 5;
	int y = 5;
	int *xptr = &x;
	int *yptr = &y;
	
	
	
	printf("%d",xptr==yptr);
	printf("%d",*xptr==*yptr);
	printf("%d",*xptr==x);
	
	printf("%d",!x);
	return 0;
}