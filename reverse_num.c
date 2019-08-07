#include<stdio.h>

int main()
{
	int num, temp=0;

	printf("Enter Your Number : ");
	scanf("%d",&num);

	while (num > 0)
	{
		temp = temp * 10 + (num % 10);
		num /= 10;
	}

	printf("The reversed number is %d\n",temp);
	return 0;
}


































