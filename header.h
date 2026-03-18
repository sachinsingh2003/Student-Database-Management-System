#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct Student
{
	int rollno;
	char name[30];
	float marks;
	struct Student *next;
}stu;
// add data------------
void add_data(stu **);
void add_begin(stu **);
void add_end(stu **);

// delete data---------
void delete_record(stu **);
void acc_roll(stu **);
void acc_name(stu **);


// Modify the data--------
void modify_data(stu *);
void mod_roll(stu *);
void mod_name(stu *);
void mod_marks(stu *);


// Sort File-------------
void sort_file(stu *);
void sort_name(stu *);
void sort_marks(stu *);


// Exit From File-------
void exit_file(stu *ptr);

// generate rollno-------
int generate_roll();

// print data-----------
void print_record(stu  *);

// save data in a file-----
void saveFile(stu *);

// delete all node--------
void delete_all(stu **);

// Reverse all node------
void reverse_node(stu **);

// Count the number of nodes----
int count_node(stu *);
 
