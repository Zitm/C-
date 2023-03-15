#include <stdio.h>
#include <string.h>


main()
{

	char str[100];
	gets(str);
	int y=strlen(str);
	int q;
	scanf("%i",&q);
	
	for(int i=q-1;i<y;i++)
	{
		str[i]=str[i+1];
	}
		
	puts(str);

}
