#include "header.h"
#include<stdio.h>

int generate_roll()
{
	static int i = 0;
	return ++i;
}

void add_data(stu **ptr)
{
while(1)
{
    int ch;

    printf("\033[1;34m******** ADD DATA *********\033[0m\n");
    printf("   1. Add at Begin\n");
    printf("   2. Add at End\n");
    printf("   3. Exit\n");

    printf("Enter Your Choice : ");
    scanf("%d", &ch);

    printf("\033[1;34m***************************\033[0m\n");

    switch(ch)
    {
        case 1:
            add_begin(ptr);
            break;

        case 2:
            add_end(ptr);
            break;

        case 3:
        	return;
        default:
            printf("Invalid choice\n");
    }
  }
}

void add_begin(stu **ptr)
{
	
	stu *new;
	new = malloc(sizeof(stu));
	
	printf("Enter the name and marks\n");
	scanf("%s %f",new->name,&new->marks);
	
	new->rollno = generate_roll();
	new->next = *ptr;
	*ptr = new;
	
}
void add_end(stu **ptr)
{
	stu *new,*last;
	new = malloc(sizeof(stu));
	printf("Enter the name and marks\n");
	scanf("%s%f",new->name,&new->marks);
	new->rollno = generate_roll();
	new->next = 0;	
	
	if(*ptr==0)
	{
		new = *ptr ;
	}
	else
	{	
		last = *ptr;
		while(last->next)
		{
			last = last->next;
		}
		last->next = new;
	}
}

