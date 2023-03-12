#include <stdio.h>

main()
{
	int n;
	printf("kol-vo elementov");
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
