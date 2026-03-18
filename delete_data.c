#include<stdio.h>
#include"header.h"

void delete_record(stu **ptr)
{
while(1)
{
	int ch;	
	
	printf("\033[1;34m******** DELETE RECORD *********\033[0m\n");
    	printf("   1. According to roll number\n");
    	printf("   2. According to Name \n");
	printf("   3. Exit\n");
    	printf("Enter Your Choice : ");
    	scanf("%d", &ch);

    	printf("\033[1;34m***************************\033[0m\n");

	switch(ch)
	{
		case 1 : 
			acc_roll(ptr);
			break;
		case 2 :
			acc_name(ptr);
			break;
		case 3 :
			return;
		default :
			printf("Invalid Choice\n");
		}
}
}

void acc_name(stu **ptr)
{
	if(*ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	char nme[20];
	printf("Enter the name whose you want to delete data\n");
	scanf("%s",nme);
	
	int count=0;
	stu *del= *ptr,*prev;
	stu *temp= *ptr;
	while(temp)
	{
		if(strcmp(temp->name,nme)==0)
			count++;
		temp = temp->next;
	}
	while(del)
	{
		
		if(count==1)							// if only 1 data is available with given name
		{
			if(strcmp(del->name,nme)==0)
			{
				if(del== *ptr)						// and if node is first node
				{
					*ptr = del->next;				// change the headpointer
				}
				else
				{
					prev->next = del->next;
				}
				free(del);
				printf("\033[31mData Delete Successfully\033[0m\n");
				return;	
			}
			prev = del;
			del = del->next;
		}
		else
		{
			printf("Count = %d\n",count);
			temp = *ptr;
			printf("\033[31m --------Record---------\033[0m\n");
			while(temp)
			{
				if(strcmp(temp->name,nme)==0)
					printf("%d     %s     %f\n",temp->rollno,temp->name,temp->marks);
				
				temp = temp->next;
			}
			int no;
			printf("Now choose roll number you want to delete\n");
			scanf("%d",&no);
			while(del)
			{
				if(del->rollno == no)
				{
					if(del = *ptr)
					{
						*ptr = del->next;                   // if it is 1st node
					}
					else
					{
						prev->next = del->next;            // if node is other then 1st node
					}
					free(del);
					printf("\033[31mData Delete Successfully\033[0m\n");
					return;
				}
				prev = del;
				del = del->next;
			}			
		}
		printf("No Record Found with this name\n");
	}
}
void acc_roll(stu **ptr)
{
	if(*ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	int no;
	printf("Enter the roll number you want to delete \n");
	scanf("%d",&no);
		
	stu *del = *ptr , *prev	;
	while(del)
	{
		if(del->rollno == no)
		{
			if(*ptr == del)                                 // if node is 1st node
			{
				*ptr = del->next;                       // change the headptr
			}
			else                                            // if node is other then 1st node
			{
				prev->next = del->next;                  // link prev node with the deleted->next node
			}
			
			free(del);
			printf("\033[31mData Delete Successfully[0m\n");
			return;
		}
		prev = del ;
		del = del->next;
	}
	printf("No Record Found With that roll no.\n");	
		
}

