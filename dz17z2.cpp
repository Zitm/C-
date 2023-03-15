#include <stdio.h>
#include <string.h>


main()
{

	char str[100];
	gets(str);
	int y=strlen(str);
	printf("%c\n",str[y-1]);
	
	char q=str[0];
	str[0]=str[y-1];
	str[y-1]=q;
	
	puts(str);

}
