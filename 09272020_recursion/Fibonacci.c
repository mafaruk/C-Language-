#include<stdio.h>

int reFab(int n, int fab, int limit){
	
	if(fab>=limit){
		return fab;
	}
	else{
		int a = fab;
		printf("%d ", a);
		fab = fab + n;
		return reFab(a,fab,limit);
	}
}
int main(){	
	reFab(0,1,100);
}
