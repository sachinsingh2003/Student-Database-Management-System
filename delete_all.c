#include"header.h"

void delete_all(stu **ptr)
{
	if(*ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	
	stu *del = *ptr;
	int c = 0;
	while(del)
	{
		*ptr = del->next;
		free(del);
		printf("Node position %d deleted \n",c++);
		sleep(1);
		del = *ptr;	
	}
	
	printf("All Node Deleted Successfully\n");
}
