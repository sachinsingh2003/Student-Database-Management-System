#include"header.h"

void sort_file(stu *ptr)
{
	int op;
	printf("\033[1;34m******** SORT FILE*********\033[0m\n");
    	printf("   1. Sort with Name\n");
    	printf("   2. Sort with Marks\n");
    	
    	printf("Enter Your Choice : ");
    	scanf("%d", &op);

    	printf("\033[1;34m***************************\033[0m\n");
    	
    	
    	switch(op)
    	{
    		case 1 : sort_name(ptr);
    			break;
    		case 2 : sort_marks(ptr);
    			break;
    		default : printf("Invalid Oprtion\n");
    	}
}

void sort_marks(stu *ptr)
{
	if(ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	
	int c = count_node(ptr);
	stu *p1 = ptr,*p2,t;
	
	for(int i=0;i<c-1;i++)
	{
		p2 = p1->next;
		
		for(int j=0;j<c-1-i;j++)
		{
			if(p1->marks > p2->marks)
			{
	             		 t.rollno = p1->rollno;
                                 strcpy(t.name ,p1->name);
                                 t.marks = p1->marks;
 
                                 p1->rollno = p2->rollno;
                                 strcpy(p1->name ,p2->name);
                                 p1->marks = p2->marks;
 
                                 p2->rollno = t.rollno;
                                 strcpy(p2->name ,t.name);
                                 p2->marks = t.marks;
			}
			p2= p2->next;
		}
		p1 = p1->next;
	}
	printf("Sorting According to marks successful\n");
}
void sort_name(stu *ptr)
{
	if(ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	
	int c = count_node(ptr);
	stu *p1 = ptr,*p2,t;
	
	for(int i=0;i<c-1;i++)
	{
		p2 = p1->next;
		
		for(int j=0;j<c-1-i;j++)
		{
			if(strcmp(p1->name,p2->name)>0)
			{
	             		 t.rollno = p1->rollno;
                                 strcpy(t.name ,p1->name);
                                 t.marks = p1->marks;
 
                                 p1->rollno = p2->rollno;
                                 strcpy(p1->name ,p2->name);
                                 p1->marks = p2->marks;
 
                                 p2->rollno = t.rollno;
                                 strcpy(p2->name ,t.name);
                                 p2->marks = t.marks;
			}
			p2= p2->next;
		}
		p1 = p1->next;
	}
	printf("Sorting According to name successful\n");
	
}
