#include <stdio.h>

main()
{
	int n;
	scanf("%i",&n);
	int mas[n];
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%i  ",mas[i]);
	}
}
