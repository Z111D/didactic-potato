#include<stdio.h>
int lower(int c)
{
	return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c; 
}
main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		putchar(lower(c));
	}
}

