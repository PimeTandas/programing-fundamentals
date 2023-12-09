#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	// Setting up variables.
	char student_name[50];
	int flag = 1;
	
	while (flag)
	{
		// Grade variables.
		double average_grade = 0;
		double total_grade = 0;
		int grades_count = 0;
		char current_grade[10];
		int current_grade_int;
		
		// Get student name.
		printf("Please enter your name, or type 0 to exit:\n");
		fgets(student_name, 50, stdin); 
	
		// Check if student name is 0 if so exit loop.
		if (strcmp(student_name, "0\n") == 0)
		{
			flag = 0;
			break;
		}
		
		int flag2 = 1;
		while (flag2)
		{
			//Get student grades.
			printf("Please enter your grades, or type -1 to exit:\n");
			fgets(current_grade, 10, stdin);
			
			// Check if grade is -1.
			if (strcmp(current_grade, "-1\n") == 0)
			{
				flag2 = 0;
				break;
			}
			
			// Convert grade to int.
			current_grade_int = atoi(current_grade);
			
			// Calculate the total grade.
			total_grade = total_grade + current_grade_int;
		
			// Increment grades count.
			grades_count++;
		}
		// Calculate the average.
		average_grade = total_grade / grades_count;
		printf("%0.2f \n", average_grade);
	}
	printf("Exiting program");
	return 0;
}