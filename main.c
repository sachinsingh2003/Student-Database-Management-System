#include"header.h"

int main()
{
	stu *headptr =0 ;
	char ch;
	while(1)
	{
		printf("\033[1;33m");
		printf("==================================================\n");
		printf("                STUDENT RECORD MENU\n               ");
		printf("\033[1;37m\n");
		printf("    a/A    : Add new Data\n    d/D    : Delete a Record\n    s/S    : Show the List\n    m/M    : Modify a Record\n    v/V    : Save\n    e/E    : Exit\n    t/T    : Sort the List\n    l/L    : Delete all the Record\n    r/R    : Reverse the list\n    c/C    :  Count Number Of Nodes\n");
		printf("\nEnter the choice : ");
		scanf(" %c",&ch);
		printf("\033[0m");
		printf("\033[1;33m");
		printf("\n==================================================\n");
		printf("\033[0m");
		printf("\n");
	
	
		switch(ch)
		{
			case 'a' :
			case 'A' : add_data(&headptr);
				break;
			case 'd':
			case 'D': delete_record(&headptr);
				break;
			case 's':
			case 'S': print_record(headptr);
				break;
			case 'm':
			case 'M': modify_data(headptr);
				break;
			case 'v':
			case 'V': saveFile(headptr);
				break;
			case 'e':
			case 'E': exit_file(headptr);
				break;
			case 't':
			case 'T': sort_file(headptr); 
				break;
			case 'l':
			case 'L': delete_all(&headptr);
				break;	
			case 'r':
			case 'R': reverse_node(&headptr);
				break;
			case 'c':
			case 'C': count_node(headptr);
				break;
		}
	}
}
