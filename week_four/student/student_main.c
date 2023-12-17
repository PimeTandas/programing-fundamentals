#include <stdio.h>

#include "student.h"

int main(int argc, char **argv)
{
	struct student s;
	s.matric = 40399792;
	s.name = "Patrick Barrett Sloan";
	s.address = "14 Ormiston Grove Melrose TD6 9SR";
	
	print_student(s);
	
	return 0;
}