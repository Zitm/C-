#include <stdio.h>

main()
{
	int day;
	printf("day=");
	scanf("%i", &day);
	switch(day)
	{
		case 1:
			{
				printf("mo");
			}
			break;
		case 2:
			{
				printf("tu");
			}
			break;
		case 3:
			{
				printf("we");
			}
			break;
		case 4:
			{
				printf("th");
			}
			break;
		case 5:
			{
				printf("fr");
			}
			break;
		case 6:
			{
				printf("sa");
			}
			break;
		case 7:
			{
				printf("su");
			}
			break;
		default:
		{
			printf("error");
		}
			}
	}
	
