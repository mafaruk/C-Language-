#include<stdio.h>
void printArray(int n, int *b){
	for(int i = 0;i<n;i++){
		printf("%d\n",*(b+i));
	}
}
int main(){
 int a[]  ={10,20,30,};
 printArray(sizeof(a)/sizeof(a[0]),a);
}