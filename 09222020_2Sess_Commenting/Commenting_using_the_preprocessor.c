#include<stdio.h>
void funCall();
int main (void){
	printf("before call function \n");//this comment is on its own line
	funCall();
	printf("After call function \n");
	
}
void funCall(){
	printf("preprocessor commenting started \n");
	/*
		multiline comment 
	*/
	#if 0 // preprocessor can be used to comment out large chunk of coed
		printf("Function call \n");
	
	#endif // end of preprocessor
	/*
	*
	* this also is a multiline comment
	*/
	printf("preprocessor commenting ended \n");
	// " ??/ " this is trigraph compileer will think that next line is a continuation of the current comment line, ??/ is longhead notation for \
}
