#include<stdio.h>

int main()
{
	int i=258,*p;
	char *c;

	p = &i;
	c = &i;
	// c = c+1; // if we want to access next byte in the charachter pointer.
	printf("Integer pointer :%d Charachter Pointer : %d \n ",*p,*c);

	return 0;
}























