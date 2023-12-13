#include <stdlib.h>
#include <stdio.h>

// A data structure containing student information.
struct student
{
	unsigned int matric;
	char *name;
	char *address;
};

// Prints student information.
void print_student(struct student s)
{
	printf("matric no: %u\n", s.matric);
	printf("name: %s\n", s.name);
	printf("address: %s\n", s.address);
}

int main(int argc, char **argv)
{
	// Output the size of the struct.
	printf("Size of student struct is %d bytes\n", sizeof(struct student));

	// Create student data structure.
	struct student s;
	s.matric = 40399792;
	s.name = "Patrick Barrett Sloan";
	s.address = "14 Ormistion Grove Melrose TD6 9SR";
	
	print_student(s);
	
	return 0;
}