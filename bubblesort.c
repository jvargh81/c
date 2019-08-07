#include<stdio.h>

int main()
{

	int i,j,num[10];
	int temp;

	printf("Enter your 10 numbers to be sorted : ");
	for(i=0;i<10;i++)
		scanf("%d",&num[i]);

	for(i=0;i<10;i++)
		for(j=0;j<10-i-1;j++){

			if(num[j] > num[j+1]){

				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
			else
				continue;
		}

	printf("Sorted Array ASC : ");
	for(i=0;i<10;i++)
		printf("%d ",num[i]);

	printf("\n");

	return 0;
}


























