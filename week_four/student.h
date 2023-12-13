#pragma once

// A struct representing a student.
struct student 
{
	unsigned int matric;
	char *name;
	char *address;
};

// Deleration of the print student method which has not been implemented.
void print_student(struct student s);