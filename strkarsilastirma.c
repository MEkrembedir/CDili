#include <stdio.h>
#include <string.h>

int main()
{
	char a[50], b[50];

	printf("Birinci Cumleyi Yaziniz:  ");
	gets(a);

	printf("Ikinci Cumleyi Yaziniz:  ");
	gets(b);
   
   printf("%s\n",a);
   printf("%s\n",b);
	if( strcmp(a,b) == 0 )
		printf("Cumleler Esittirn");
	else
		printf("Cumleler Esit Degildir");

	return 0;
}
