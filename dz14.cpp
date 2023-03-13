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
			mas[i][b]=rand()%10+(-2);
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
