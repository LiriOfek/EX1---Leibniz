/********************************************************\
File Name: main.c
Author: Liri (3/4/2020)
Purpose: This file run the program that get 3 variables 
	     from user and calculate their average.
\********************************************************/

#define _CRT_SECURE_NO_WARNINGS
#define INITIAL_NUMBER (0)
#define ENTER ('\n')
#define DECIMAL (10)
#define CHAR_ZERO ('0')
#define NUMBER_OF_GRADES (3)
#define LIMIT_OF_PASS_GRADE (55)

#define STRING_FOR_ENTER_FIRST_NUMBER ("Enter first grade:     ")
#define STRING_FOR_ENTER_SECOND_NUMBER ("Enter second grade:     ")
#define STRING_FOR_ENTER_THIRD_NUMBER ("Eter third grade:     ")
#define STRING_FOR_PRINT_AVERAGE ("Average: %f\n")
#define FAIL ("Failed\n")
#define PASS ("Passed\n")

#include <stdio.h>

float calculate_average(int first_number, 
						int second_number, 
						int third_number) {
	/********************************************************\
	* Function name - calculate_average
	*
	* Function Purpose - calculate the average of the given numbers
	*
	* Parameters - IN int first_number - the first given number
	*			   IN int second_number - the second given number
	*			   IN int third_number - the third given number
	*			   OUT float average - the average of the given numbers
	*
	* Return Value - the average of the given numbers
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - calculate the average of the given numbers
	*			  and return it.
	*
	* Author - Liri
	\********************************************************/
	int sum = INITIAL_NUMBER; 
	float average = INITIAL_NUMBER; 

	sum = first_number + second_number + third_number;
	average = (float)sum / (float)NUMBER_OF_GRADES;
	return average;
}


void main() {
	/********************************************************\
	* Function name - main
	*
	* Function Purpose - get three numbers from user,
	*					 calculate the average of them
	*					 and check if the user pass or fail
	*
	* Parameters - no Input/Output parameters
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - get three numbers from user,
	*			  print the average
	*			  and print if the user pass or fail
	*
	* Author - Liri
	\********************************************************/
	int first_grade = INITIAL_NUMBER; 
	int second_grade = INITIAL_NUMBER; 
	int third_grade = INITIAL_NUMBER; 
	float average = INITIAL_NUMBER; 

	/*get three numbers from user*/
	printf(STRING_FOR_ENTER_FIRST_NUMBER);
	scanf("%d", &first_grade);
	printf(STRING_FOR_ENTER_SECOND_NUMBER);
	scanf("%d", &second_grade);
	printf(STRING_FOR_ENTER_THIRD_NUMBER);
	scanf("%d", &third_grade);

	/*calculate the average of the numbers*/
	average = calculate_average(first_grade, 
								second_grade, 
								third_grade);
	printf(STRING_FOR_PRINT_AVERAGE, average);

	/*check if the user pass or fail*/
	if (LIMIT_OF_PASS_GRADE > average)
	{
		printf(FAIL);
	}
	else {
		printf(PASS);
	}
}
