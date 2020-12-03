#include<stdio.h>
int *fun_ret_ptr(int n,int a[]);

int main(){
	int a[] = {1,2,3};
	int *p = fun_ret_ptr(sizeof(a)/sizeof(a[0]),a);/// similar to p = &a[n/2] 
	printf("%d \n",*p);
}
int *fun_ret_ptr(int n,int a[]){
	return &a[n/2]; 
}