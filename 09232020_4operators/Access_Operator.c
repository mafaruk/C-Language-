//" . " & " -> " are access operator
#include <stdio.h>

struct Mystruct{
	int x;
	int y;
};

int main(){
	struct Mystruct obj;
	obj.x = 5;
	obj.y = 6 ;//. is member of operator
	printf("%d \n",obj.x);
}