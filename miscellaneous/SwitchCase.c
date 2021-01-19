# include <stdio.h>
int main()
{
int i=0;
for(i=0; i<20; i++)
{
  printf("%d\n",i );
	switch(i)
	{
	case 0:
		i+=5;
	case 1:
		i+=2;
	case 5:
		i+=5;
	default:
		printf("in default \n");
		i+=4;
		break;
	}
	printf("%d ", i);
}

getchar();
return 0;
}
