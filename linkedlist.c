#include<stdio.h>
#include<stdlib.h>

struct st{
	int num;
	struct st *next;
};

typedef struct st link;

static link * headptr = 0;

void mux_node(int);
void add_node(link**);
void print(link*);
void del_node(link**);
int search_node(link*,int);
void del_num(link**,int);

int main()
{
	int option;
	while(1)
	{
		system("clear");
		printf("Add, Del, insert a Linked List.\n");
		printf("Enter option for the operation\n 1. Add Node\n 2. Delete Node\n 3. Search\n 4. Print\n 5. Delete by Number\n 6. Exit");
		printf("\nEnter your options : ");
		scanf("%d",&option);
		if(option != 6)
			mux_node(option);
		else{
			printf("\nThank you!!!\n");
			break;
		}
	}
	
	return 0;
}

void mux_node(int option)
{
	
	int num,temp;

	switch(option){
		case 1:
			add_node(&headptr);
			break;

		case 2:
			del_node(&headptr);
			break;
		case 3:
			printf("Which node you want to search: ");
			scanf("%d",&num);
			temp = search_node(headptr,num);	
			printf("Your node is at index : %d",temp);
			printf("\n");
			sleep(5);	
			break;

		case 4: 
			print(headptr);
			break;

		case 5: 
			printf("Enter the number to be deleted: ");
			scanf("%d",&num);
			del_num(&headptr,num);
			break;

		default :
			printf("Not a valid option.\n");
			break;
	}
}

void add_node(link**ptr)
{
	link *temp, *temp1;

	temp1 = *ptr;
	
	temp = malloc(sizeof(link));
	
	printf("\n\n\nEnter your number : ");
	scanf("%d",&(temp->num));
	
	if(*ptr == 0){

		temp->next = *ptr;
		*ptr = temp;
		temp1 = temp;
	}
	else{
		while(temp1->next != NULL)
			temp1 = temp1->next;

		temp->next = 0;
		temp1->next = temp;
	}	
}


void del_node(link **ptr)
{
	
	link *temp,*temp1;
	
	temp = *ptr;

	if(*ptr == 0)
		return;
	else if(temp->next == 0){
		free(temp);
		return;
	}
	else{
		while(temp->next->next)
			temp = temp->next;	
		
		temp1 = temp->next;  
		temp->next = 0;
	}	free(temp1);
}

int search_node(link *ptr,int value)
{
	
	int count = 0;
	
	while(ptr){
		
		count++;
		if(ptr->num == value){
			return count;
		}
		
		ptr = ptr->next;
	}

	return -1;
}


void del_num(link **ptr,int num)
{
	link *temp,*temp1;
	int search,i=0;
	temp = *ptr;
	
	search = search_node(*ptr,num);
	
	while(i < search-2){
		temp = temp->next;
		i++;
	}
	printf("%d\n",temp->num);
	sleep(2);
}

void print(link*ptr)
{
	printf("\n\n\nAvailable nodes : ");
	while(ptr){
		
		printf("%d ",ptr->num);
		ptr = ptr->next;
	}
	
	printf("\n\n\n\n");
	sleep(5);	
}










