#include <stdio.h>

int main()
{
	char  day,month,year;
	
	printf("Enter the Day :");	
	scanf("%s",&day); /* Storing in to the address*/
	printf("Enter the Month :");	
	scanf("%s",&month); 
	printf("Enter the Year :");	
	scanf("%s",&year);
        printf("\n");	
	printf("%s",month);
	if((int)month == 02)
	{
		printf("This is February.\n");
	}
	
}



































