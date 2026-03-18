#include"header.h"

void reverse_node(stu **ptr)
{
	if(*ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	
	int c = count_node(*ptr);
	
	if(c>1)
	{
		stu **arr = malloc(sizeof(stu *)*c);
		stu *temp = *ptr;
		
		int i = 0;
		
		while(temp)
		{
			arr[i++] = temp;
			temp = temp->next;
		}
		
		for(int i=c-1;i>0;i--)
		{
			arr[i]->next = arr[i-1];
		}
		arr[0]->next = 0;
		*ptr = arr[c-1]; 
	
	}
	printf("Reverse Node Successfull\n");
}
