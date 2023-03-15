#include <stdio.h>
#include <string.h>


main()
{

	char str[100];
	gets(str);
	int y=strlen(str);

	
	for(int i=0;i<y;i++)
	{
		str[i]=str[i+1];
	}
		
	puts(str);

}
