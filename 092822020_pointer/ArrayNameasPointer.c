#include<stdio.h>
int main(){
	int a[] ={10,20,30,40};
	*a = 11; //*a = 10 == a[0] = 11 as we no pointer holds base address;
	printf("%d",a[0]);
	*(a+1) = 22 ;
	printf("%d",a[1]);
}