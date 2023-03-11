#include <stdio.h>

main()
{
	int sum,i;
	sum=0;
	i=5;
	while(i<16)
	{
		sum=sum+i;
		i=++i;
	}
	printf("%i",sum);
}
