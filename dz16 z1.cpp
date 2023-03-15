#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	
	
	for(int i=0;i<m;i++)
	{
		for(int w=0;w<n;w++)
		{
		
			for (int j=0;j<n-1;j++)
			{
				if(mas[i][j]>mas[i][j+1])
				{
					int q=mas[i][j];
					mas[i][j]=mas[i][j+1];
					mas[i][j+1]=q;
				}
			}
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
