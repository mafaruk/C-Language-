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
	int n =0;
	int fabb= 1;
	int limit=100;
	reFab(n,fabb,limit);
}
