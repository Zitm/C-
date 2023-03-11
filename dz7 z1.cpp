#include <stdio.h>

main()
{
	int i=1;
	while(i<10)
	{
		printf("hello\n");
		i++;
	}
	
	int b=0;
	int c=0;
	while(b<16)
	{
		printf("%i\n",c++);
		b++;
	}
	
	int d=0;
	int e=0;
	while(d<16)
	{
		e++;
		if(e%2!=0)
		{
			printf("%i\n",e);
		}
			
		d++;
	}
}
