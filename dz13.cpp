#include <stdio.h>

main()
{
	int mas[100][100];
	int m,n;
	
	printf("m=");
	scanf("%i",&m);
	
	printf("n=");
	scanf("%i",&n);
	
	for(int i=0;i<m;i++)
	{
		for(int b=0;b<n;b++)
		{
			scanf("%2i",&mas[i][b]);
		}
	}
	
	
	for(int i=0;i<m;i++)
	{
		for(int b=0;b<n;b++)
		{
			printf("%2i",mas[i][b]);
		}
		printf("\n");
	}

}
