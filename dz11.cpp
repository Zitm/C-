#include <stdio.h>

main()
{
	int n;
	int mas[100];
	printf("kol-vo elementov ");
	scanf("%i",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i]);
	}
	bool fl=true;
	
	while(fl)
	{
		fl=false;
		for(int i=0;i<n-1;i++)
		{
			
			if(mas[i]>mas[i+1])
			{
				int b;
				b=mas[i];
				mas[i]=mas[i+1];
				mas[i+1]=b;
				fl=true;
				
			}
		}
	}
	
	
	
	for(int i=0;i<n;i++)
	{
		printf("%4i",mas[i]);
	}
}
