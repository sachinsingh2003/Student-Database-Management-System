#include"header.h"

int count_node(stu *ptr)
{
	int count=0;
	while(ptr)
	{
		count++;
		
		ptr = ptr->next;
	}
	return count;
}
