#include <stdio.h>

int main(void)
{
	char c;

	puts("Hello world!");
	c = getc(stdin);
	fputs(&c, stderr);
	
	return 0;
}
