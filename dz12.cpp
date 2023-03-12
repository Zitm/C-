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
	
	int max,min;
	min=max=mas[0];
	int sum=0;
	
	
	for(int i=0;i<n;i++)
	{
		if(mas[i]<min)
		{
			min=mas[i];
		}
		
		if(mas[i]>max)
		{
			max=mas[i];
		}
		sum+=mas[i];
	}
	
	float sr=(float)sum/(float)n;
	
	
	printf("summa=%i\nmaximum=%i\nminimum=%i\nsrednee=%f",sum,max,min,sr);
}
