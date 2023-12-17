#include <stdio.h>

#include "student.h"

void print_student(struct student s)
{
	printf("Matric:%d\n", s.matric);
	printf("Name: %s\n", s.name);
	printf("Address: %s\n", s.address);
}