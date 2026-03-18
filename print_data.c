#include<stdio.h>
#include"header.h"

void print_record(stu *ptr)
{
	if(ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	printf("\033[1;31m**********  Record ***********\033[0m\n");
	while(ptr)
	{
		printf("%d     %s     %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
