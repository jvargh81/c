#include<stdio.h>

int main()
{
	int num,i,j,x,y;

	int size;

	printf("Enter Your number to be Reversed : ");
	scanf("%d",&num);

	size = sizeof(int)*8 - 1;

	printf("Bits of your number : ");
        for(j=size;j>=0;j--){

                if(num & 1 << j){
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

	for(i=size,j=0;i>j;i--,j++){
		
		x = num & 1 << i;
		y = num & 1 << j;
		
		if (x != y){
			num = num ^ 1 << i;
			num = num ^ 1 << j;	
		}	
	}

	
	printf("Bits of new number : ");
        for(j=size;j>=0;j--){

                if(num & 1 << j){
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
}














































