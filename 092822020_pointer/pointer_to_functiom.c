#include<stdio.h>
int fun(int);
int main(){
	
	int(*fn)(int) = &fun;
	printf("%d",(*fn)(10));
}
int fun(int a){
	return a+10;
}


// int main(){
	
	// int(*fn)(int) = fun;
	// printf("%d",(fn)(10));
// }
// int fun(int a){
	// return a+10;
// }

//both are equal code