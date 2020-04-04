#include "calculator_according_to_operator.h"

#define INITIAL_NUMBER (0)

float calculate_expression(int first_number, int second_number, char operator) {
	float result = INITIAL_NUMBER; /*the result of the expression*/
	switch (operator)
	{
	case '+':
		result = (float)first_number + (float)second_number;
		break;
	case '-':
		result = (float)first_number - (float)second_number;
		break;
	case '*':
		result = (float)first_number * (float)second_number;
		break;
	case '/':
		result = (float)first_number / (float)second_number;
		break;
	case '%':
		result = (float)(first_number % second_number);
		break;
	}
	return (float) result;
}