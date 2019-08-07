#include<stdio.h>

void decTOdual(int decNumber){
	int reminder[4],i=0,length;
		
	while(decNumber){	
		reminder[i] = decNumber % 2;
		decNumber = decNumber / 2;
		i++;
	}
	length = sizeof(reminder)/sizeof(reminder[0]);
	
	for(i=length;i>=0;i--){
		printf("%d",reminder[i]);	
	}
}


int main()
{
	int decNumber;
	
	printf("Enter Your DecNumber : ");
	scanf("%d",&decNumber);

	if(decNumber > 0){	
		printf("%d is ",decNumber);
		decTOdual(decNumber);
		printf("\n");
	}
	else{
		printf("0\n");
	}


	return 0;
}




































