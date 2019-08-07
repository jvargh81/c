#include<stdio.h>

int main()
{
	int num, temp=0;

	printf("Enter a number : ");
	scanf("%d",&num);


	while(num > 0)
	{

		temp += num % 10;
		 
		num /= 10; 
	
	}

	printf("The number after addition is %d\n",temp);

	return 0;
}

































