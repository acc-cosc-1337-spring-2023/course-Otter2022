#include "expressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double get_sales_tax_amount(double meal_amount)
{
	const double tax_rate = .0625;
	return meal_amount * tax_rate;
}

double get_tip_amount(double tax_amount, double meal_amount)
{
	return tax_amount * meal_amount;
}



