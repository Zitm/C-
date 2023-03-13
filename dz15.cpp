#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	srand(time(NULL));
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
			scanf("%i",&mas[i][b]);
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
	
	printf("\n");
	int imas[100][100];
	
		for(int i=0;i<m;i++)
		{
			for(int b=0;b<n;b++)
			{
				
				imas[b][i]=mas[i][b];
				
			}
		}
	
	
	for(int i=0;i<n;i++)
	{
		for(int b=0;b<m;b++)
		{
		
			printf("%2i",imas[i][b]);
		}
		printf("\n");
	}

}
