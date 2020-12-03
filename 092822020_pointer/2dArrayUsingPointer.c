#include<stdio.h>
void printArray(int n, int *b){
	for(int i =0;i<n;i++){
		printf("%d",*(b+i));
	}
	
}
int main(){
	int a[2][3]= {{1,2,3},{4,5,6}};
	printf("%d\n",sizeof(a)/sizeof(a[0][0]));
	printArray(sizeof(a)/sizeof(a[0][0]),*a);
}