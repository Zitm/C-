#include <stdio.h>

main()
{
	int i;
	while(i!=7)
	{
		scanf("%i",&i);
		
		if(i<10)
		{
			printf("menshe 10\n");
		}
		if(i%2==0)
		{
			printf("delitsya na 2\n");
		}
		else
		{
			printf("ne delitsya na 2\n");
		}
		if(i%3==0)
		{
			printf("delitsya na 3\n");
		}
		else
		{
			printf("ne delitsya na 3\n");
		}
		if(i<7)
		{
			printf("bolshe\n");
		}
		else
		{
			if(i>7)
			{
				printf("menshe\n");
			}
			else
			{
				printf("pravilno\n");
			}
		}
	}
}
