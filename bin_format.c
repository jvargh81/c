#include<stdio.h>

int main()
{
	int i,j,size;
	
	printf("Enter your number : ");
	scanf("%d",&i);
	
	size = sizeof(int)*8 - 1;

	for(j=size;j>=0;j--){
		
		if(i & 1 << j){
			printf("1");
		}
		else{
			printf("0");
		}

		if(!((j+0)%4)){         // if j=0 in forloop then (j+1)%4.
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}



































