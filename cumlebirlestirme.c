#include <stdio.h>
#include <string.h>

int main( void )
{
    char cdizi1[] = "Bilgisayar";
    const char cdizi2[] = " Programlama";

    strcat(cdizi1, cdizi2);

    printf("cdizi1 belleki: %s\n", cdizi1);

    return 0;
}
