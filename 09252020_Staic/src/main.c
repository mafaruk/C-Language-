#include<stdio.h>
// #include"Staic_.h"//<- this or int increament(); else compiler gives warnning

//extern int a; ///error if a is static in other file 
int main(){
	int val = increament ();
	//val  = a + 1; /////error if a is static in other file 
	printf("%d \n", val);
}