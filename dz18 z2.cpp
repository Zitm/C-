#include <stdio.h>
#include <string.h>


main()
{
	char strb[100];
	char str[100];
	gets(str);
	int i=0;
	
	for(int y=strlen(str);y>0;y--)
	{
		
		strb[i]=str[y-1];
		i++;		
	}
			
	puts(strb);

}
