#include<stdio.h>
#include<unistd.h>
int main(void)
{
	char str[] = "and that of art is useful\" - Dora Kopar, 2015-10-19\x0A";
	write(1,str,50);
	return 0;
}
