#include<stdio.h>

int main()
{

	int num,i;

	printf("Enter Your Number : ");
	scanf("%d",&num);

	while(num!=1)
	{
		if(num%2 != 0){
			break;
		}

		num = num/2;
	}

	if(num == 1){
		printf("Power of Two");
	}
	else{
		printf("Not Power of Two");

	}
	printf("\n");


	return(0);
}





































