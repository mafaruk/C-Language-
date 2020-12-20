#include<stdio.h>
int main(){
	
	int a = 5, b = 4,c;
	// token genration lexical anylyzer comes in picture 
	c = a+++b;//(a++)+b /// post increament(context of equation):-  first use value then increament
	printf("%d \n",c); 
	c = a+ ++b;//a+ (++b)
	printf("%d \n",c);///pre increament (context of equation):- first increamnet value then use 
	a = 5, b = 4;
	c =a+++++b; //lvalue required as ((a++)++)+b
	printf("%d \n",c); 
}