#include<stdio.h>
int main(){
	int x[] = {10,15};
	int *p = &x[0];
	printf("%d\n",*(++p));
	printf("%d\n",++(*p));
}