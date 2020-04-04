/********************************************************\
File Name: main.c
Author: Liri (3/4/2020)
Purpose: This file run the program that get 3 variables 
	     from user and calculate their average.
\********************************************************/

#include <stdio.h>

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

int get_number_from_user() {
	/********************************************************\
	* Function name - get_number_from_user
	*
	* Function Purpose - get the number that the user type
	*
	* Parameters - OUT integer number - the number that the user type
	*
	* Return Value - the number that the user type
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - this function get the number that the user types
	*			  and return it.
	*
	* Author - Liri
	\********************************************************/
	int number = INITIAL_NUMBER; /*the total number the user enter*/
	int char_from_user; /*the next char from user*/

	while ((char_from_user = getchar()) != ENTER) {
		/*multiply the digits seen already by 10 and
		add the decimal value of the new digit*/
		number = number * DECIMAL + (char_from_user - CHAR_ZERO);
	}
	return number;
}

float calculate_average(int first_number, int second_number, int third_number) {
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
	int sum = INITIAL_NUMBER; /*the sum of the numbers*/
	float average = INITIAL_NUMBER; /*the average of the numbers*/

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
	int first_grade = INITIAL_NUMBER; /*the first grade the user enter*/
	int second_grade = INITIAL_NUMBER; /*the second grade the user enter*/
	int third_grade = INITIAL_NUMBER; /*the third greade the user enter*/
	float average = INITIAL_NUMBER; /*the average of the grades*/

	/*get three numbers from user*/
	printf(STRING_FOR_ENTER_FIRST_NUMBER);
	first_grade = get_number_from_user();
	printf(STRING_FOR_ENTER_SECOND_NUMBER);
	second_grade = get_number_from_user();
	printf(STRING_FOR_ENTER_THIRD_NUMBER);
	third_grade = get_number_from_user();

	/*calculate the average of the numbers*/
	average = calculate_average(first_grade, second_grade, third_grade);
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
