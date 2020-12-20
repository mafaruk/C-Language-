#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int getDigit(int n ){
	a = a + n%10;
	if(n==0){
		return a;
	}
	else{
		getDigit(n/10);
	}
}
int main() {
    int n;
    scanf("%d", &n);
    int sum = getDigit(n);
    printf("%d",sum);
    return 0;
}