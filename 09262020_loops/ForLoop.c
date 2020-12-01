#include<stdio.h>
int main(){
	int i = 1024;
	int count;
	
	for(count = 0; i;i>>=1){
		count++;
	}
	printf("%d",count);
}
