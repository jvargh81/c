#include<stdio.h>

int main()
{
	int num1,num2,i,j;

	printf("Enter your range : ");
	scanf("%d %d",&num1,&num2);

	printf("Prime numbers for the range : ");
	for(i=num1;i<num2;i++){
		
		for(j=2;j<i;j++){
			
			if(i % j == 0){
				break;
			}
		}
	
		if(j == i){
			printf("%d ",i);
		}
	}
	printf("\n");

	return 0;
}
































