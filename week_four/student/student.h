#pragma once 

struct student
{
	unsigned int matric;
	char *name;
	char *address;
};

void print_student(struct student s);