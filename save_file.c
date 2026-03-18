#include"header.h"

void saveFile(stu *ptr)
{
	if(ptr==0)
	{
		printf("No Record Found\n");
		return;
	}
	
	FILE *fp;
	fp = fopen("student_data.txt","w");
	
	while(ptr)
	{
		fprintf(fp,"%d     %s     %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr= ptr->next;
	}
	
	printf("Data Saved Successfully\n");
	fclose(fp);
}

