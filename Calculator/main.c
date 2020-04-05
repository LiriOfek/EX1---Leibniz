/********************************************************\
File Name: main.c
Author: Liri (4/4/2020)
Purpose: This file run the program that get 2 numbers and operator
		 from user and calculate the result of the expression.
\********************************************************/
#include "calculator_according_to_operator.h"

#define INITIAL_NUMBER (0)
#define ENTER ('\n')
#define DECIMAL (10)
#define CHAR_ZERO ('0')

#define STRING_FOR_ENTER_FIRST_NUMBER ("Enter first number:     ")
#define STRING_FOR_ENTER_SECOND_NUMBER ("Enter second number:     ")
#define STRING_FOR_ENTER_OPERATR ("Enter operator:     ")

void main() {
	/********************************************************\
	* Function name - main
	*
	* Function Purpose - get two numbers and operator from user,
	*					 calculate the expression and print the result
	*
	* Parameters - no Input/Output parameters
	*
	* Return Value - there isn't return value
	*
	* Side Effects - this function has no side effects
	*
	* Semantics - get teo numbers and operator from user,
	*			  calculate the result and print it
	*
	* Author - Liri
	\********************************************************/
	int first_number = INITIAL_NUMBER; /*the first number the user enter*/
	int second_number = INITIAL_NUMBER; /*the second number the user enter*/
	char operator = INITIAL_NUMBER; /*the operator the user enter*/
	float result = INITIAL_NUMBER; /*the result of the expression*/

								   /*get two numbers and operator from user*/
	printf(STRING_FOR_ENTER_FIRST_NUMBER);
	first_number = get_number_from_user();
	printf(STRING_FOR_ENTER_SECOND_NUMBER);
	second_number = get_number_from_user();
	printf(STRING_FOR_ENTER_OPERATR);
	operator = getchar();

	/*calcullate the expression and print the result*/
	result = calculate_expression(first_number, second_number, operator);
	printf("%d%c%d==%f\n", first_number, operator, second_number, result);
}