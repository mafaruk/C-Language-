#include<stdio.h>
int main(void){
	printf("int %lu\n ",sizeof(int)*8);
	
	printf("short int %ld\n",sizeof(short int)*8);
	
	printf("signed int %ld\n",sizeof(signed int)*8);
	
	printf("signed short int %ld\n",sizeof(signed short int)*8);
	
	printf("long int %ld\n",sizeof(long int)*8);
	
	printf("long long int %lld\n",sizeof(long long int)*8);
	
	printf("unsigned int %ld\n",sizeof(unsigned int)*8);
	
	printf("unsigned int %ld\n",sizeof(unsigned short int)*8);
	
	printf("float %ld\n",sizeof(float)*8);
	
	printf("Double %lg   \n",sizeof(double)*8);
	
	printf("Long Double %ld\n",sizeof(long double)*8);
	
	printf("Char %ld\n",sizeof(char)*8);
	
	printf("signed char %ld\n", sizeof(signed char)*8);
	return 0;
}
