#include <stdio.h>
#include <math.h>

main()
{
	int d,m,y;
	printf("day? ");
	scanf("%i",&d);
	printf("month? ");
	scanf("%i",&m);
	printf("year? ");
	scanf("%i",&y);
	int l=y%4;
	int c=y%12;
	if (l==0)
	{
		printf("leap year,");
	}
	else
	{
		printf("non-leap year,");
	}
	switch(c)
	{
		case 1:
			{
				printf("rooster,");
			}
			break;
		case 2:
			{
				printf("Dog,");
			}
			break;
		case 3:
			{
				printf("Pig,");
			}
			break;
		case 4:
			{
				printf("Rat,");
			}
			break;
		case 5:
			{
				printf("Ox,");
			}
			break;
		case 6:
			{
				printf("Tiger,");
			}
			break;
		case 7:
			{
				printf("Rabbit,");
			}
			break;
		case 8:
			{
				printf("Dragon,");
			}
			break;
		case 9:
			{
				printf("Snake,");
			}
			break;
		case 10:
			{
				printf("Horse,");
			}
			break;
		case 11:
			{
				printf("Goat,");
			}
			break;
		case 0:
			{
				printf("Monkey,");
			}
			break;
	}
	if (((m==3)&&(d>21))||(m==4)&&(d<19))
	{
		printf("Aries");
	}
	else
	{
		if (((m==4)&&(d>20))||(m==5)&&(d<21))
		{
			printf("Taurus");
		}	
		else
		{
			if (((m==5)&&(d>20))||(m==6)&&(d<21))
			{
				printf("Gemini");
			}
			else
			{
				if (((m==6)&&(d>20))||(m==7)&&(d<21))
				{
					printf("Cancer");
				}
				else
				{
					if (((m==7)&&(d>20))||(m==8)&&(d<21))
					{
						printf("Leo");
					}
					else
					{
						if (((m==8)&&(d>20))||(m==9)&&(d<21))
						{
							printf("Virgo");
						}
						else
						{
							if (((m==9)&&(d>20))||(m==10)&&(d<21))
							{
								printf("Libra");
							}
							else
							{
								if (((m==10)&&(d>20))||(m==11)&&(d<21))
								{
									printf("Scorpio");
								}
								else
								{
									if (((m==11)&&(d>20))||(m==12)&&(d<21))
									{
										printf("Sagittarius");
									}
									else
									{
										if (((m==12)&&(d>20))||(m==1)&&(d<21))
										{
											printf("Capricorn");
										}
										else
										{
											if (((m==1)&&(d>20))||(m==2)&&(d<21))
											{
												printf("Aquarius");
											}
											else
											{
												printf("Pisces");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

}
