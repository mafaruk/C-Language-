#include<stdio.h>
int main(void){
	char* str = "hello"; ///cannot be modified 
	printf("%s \n",str);
	/* 
	str[0] = 'f';  /// undefined behavior 
	printf("%s mak",str); //does not work 
	*/
	//for good practice use always use char *const 
	char *const str1 = "mak";
	printf("%c \n ", str[0]);
	
	char abc[4] = "mak";// this type of intialization can be modified 
	abc[0] ='x';
	abc[3] = '4';
	printf("%s \n",abc);
	printf("%c \n", abc[0]);
	
}