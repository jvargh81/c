#include<stdio.h>

int main()
{
	int i,j,num;
	char *cp;


	printf("Enter Your Number : ");
	scanf("%d",&num);

	cp = &num;
	cp = cp + 3;

	for(i=0;i<4;i++){
		for(j=7;j>=0;j--){
			if(*cp & 1 << j){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf(" ");
		
		cp = cp - 1;
	}
	printf("\n");

	
	return 0;
}

























