#include"header.h"

void modify_data(stu *ptr)
{
	int op;
	while(1)
	{
		printf("\033[1;34m******** Modify Data *********\033[0m\n");
    		printf("   1. Modify Roll Number\n");
    		printf("   2. Modify Name\n");
    		printf("   3. Modify Marks\n");
    		printf("   4. Exit\n");

    		printf("Enter Your Choice : ");
    		scanf("%d", &op);

    		printf("\033[1;34m***************************\033[0m\n");
	
		
		switch(op)
		{
			case 1 : mod_roll(ptr); 
				break;
			case 2 : mod_name(ptr);
				break; 
			case 3 : mod_marks(ptr);
				break;
			case 4: return;
			default : printf("Invlaid Option\n");
		}
	}
}

void mod_marks(stu *ptr)
{
	if(ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	float old_marks,new_marks;
	
	printf("Enter the marks you want to modify\n");
	scanf("%f",&old_marks);
	
	stu *temp = ptr;
	stu *temp2 = ptr;
	int count=0;
	while(temp)
	{
		if(temp->marks==old_marks)
			count++;
		
		temp = temp->next;
	}
	while(ptr)
	{
		if(count==0)
		{
			printf("NO Record with this Marks\n");
			return;
		}
	
		if(count==1)
		{
			if(ptr->marks==old_marks)
			{
				printf("Enter the new marks \n");
				scanf("%f",&new_marks);
				
				ptr->marks = new_marks;
				printf("Marks is changed successfully\n");
				return;
			}
			ptr = ptr->next;  
		}
		if(count>1)
		{
			printf("\033[31m --------Record---------\033[0m\n");
			while(temp2)
			{
				if(temp2->marks==old_marks)
					printf("%d     %s     %f\n",temp2->rollno,temp2->name,temp2->marks);
				
				temp2 = temp2->next;
			}
			int no;
			printf("Now choose the roll no according to which you want to modify marks\n");
			scanf("%d",&no);
			
			while(ptr)
			{
				if(ptr->rollno == no)
				{
					printf("Now Enter the new marks\n");
					scanf("%f",&new_marks);
					
					ptr->marks = new_marks;
					printf("Marks changed successfully\n");
					return;
				}
				ptr-ptr->next;
			}
		}

	}
}
void mod_name(stu *ptr)
{
	if(ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	char old_name[20];
	
	printf("Enter the name You want to change\n");
	scanf("%s",old_name);
	
	stu *temp = ptr;
	stu *temp2 = ptr;
	int count=0;
	while(temp)
	{
		if(strcmp(temp->name,old_name)==0)
			count++;
		
		temp = temp->next;
	}
	while(ptr)
	{
		if(count==0)
		{
			printf("NO Record with this name\n");
			return;
		}
	
		if(count==1)
		{
			if(strcmp(ptr->name,old_name)==0)
			{
				printf("Enter the new name \n");
				scanf("%s",ptr->name);
				
				printf("Name is changed successfully\n");
				return;
			}
			ptr = ptr->next;  
		}
		if(count>1)
		{
			printf("\033[31m --------Record---------\033[0m\n");
			while(temp2)
			{
				if(strcmp(temp2->name,old_name)==0)
					printf("%d     %s     %f\n",temp2->rollno,temp2->name,temp2->marks);
				
				temp2 = temp2->next;
			}
			int no;
			printf("Now choose the roll no according to which you want to modify name\n");
			scanf("%d",&no);
			
			while(ptr)
			{
				if(ptr->rollno == no)
				{
					printf("Now Enter the new name\n");
					scanf("%s",ptr->name);
					
					printf("Name changed successfully\n");
					return;
				}
				ptr-ptr->next;
			}
		}

	}
			
}
void mod_roll(stu *ptr)
{
	int old_roll , new_roll ;
	printf("Enter the roll number you want to modify\n");
	scanf("%d",&old_roll);
	
	stu *temp = ptr;
	while(ptr)
	{
		if(ptr->rollno== old_roll)
		{
			l1:
			printf("Enter the new roll number\n");
			scanf("%d",&new_roll);
			
			
			while(temp)
			{
				if(temp->rollno == new_roll)
				{
					printf("Roll number is already taken\n");
					goto l1;
				}
				temp= temp->next;
			}
			ptr->rollno = new_roll ;
			
			printf("Roll number modified successfully\n");
			return;
		}
		ptr = ptr->next ;
	}
	printf("No Record Found with this Roll Number\n");
}
