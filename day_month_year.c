#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// TODO numbers of the day
	// step 1 - read d(ay), m(onth) and y(ear)
	int d, m, y, dim;
	printf("input day month year: ");
	scanf("%d %d %d", &d, &m, &y);
	printf("day %d month %d year %d\n", d, m, y);
	// check month > 0 and < 13
	// logical AND is && in C
	// logical OR is || in C
	if (m > 0 && m < 13) {
		if (y>=1583){
			if(m == 2){
				if(y%4&&((y%100 > 0) && (y%100 < 0) || (y % 400 == 0))){
					dim = 29;
				}
				else{
					dim = 28;
				}
			}	
			else if(m==4 || m==6 || m==9 || m==11) {
				dim = 30;	
			}
			else{
				dim = 31;
			}
		}
		else {
			printf("This is not a valid year number\n");
		}
		
		int dnr = 0;
		int i = 1;

		for(i;i < m;i++){

			if (m == 2) {
				if(y%4&&((y%100 > 0) && (y%100 < 0) || (y % 400 == 0))){
					dnr = dnr + 29;
					break;
				}
				else{
					dnr = dnr + 28;
					break;
				}
			}
			else{
				if(m==4 || m==6 || m==9 || m==11){
                                        dnr = dnr + 30;
					break;
                                }
                                else{
                                        dnr = dnr + 31;
					break;
                                }
			}
		}		
		dnr = dnr + d;
		printf("Number of the day : %d \n",dnr);
	}
	else{
		printf("The data entered is not valid...");
		return 0;
	}
}
