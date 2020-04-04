/********************************************************\
File Name: main.c
Author: Liri (4/4/2020)
Purpose: This file run the program that get 2 numbers and operator
		 from user and calculate the result of the expression.
\********************************************************/
#include <stdio.h>

#define INITIAL_NUMBER (0)
#define ENTER ('\n')
#define DECIMAL (10)
#define CHAR_ZERO ('0')

int get_number_from_user() {
	/********************************************************\
	* Function name - get_number_from_user
	*
	* Function Purpose - get the number that the user type
	*
	* Parameters - OUT int number - the number that the user type
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

void main() {
	int number1 = get_number_from_user();
	int number2 = get_number_from_user();
	printf("%d %d", number1, number2);
}