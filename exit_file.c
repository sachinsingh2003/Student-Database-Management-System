#include"header.h"

void exit_file(stu *ptr)
{
	int op;
    	printf("\033[1;34m******** EXIT FILE *********\033[0m\n");
    	printf("   1. Save and Exit\n");
    	printf("   2. Exit without saving\n");

    	printf("Enter Your Choice : ");
    	scanf("%d", &op);

    	printf("\033[1;34m***************************\033[0m\n");

	switch(op)
	{
		case 1 : saveFile(ptr); 
			exit(0);
			break;
		case 2 : exit(0); break;
		default : printf("Invalid option\n"); 
	}
}
