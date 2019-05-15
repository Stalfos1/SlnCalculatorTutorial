

#include "pch.h"
#include <iostream>

#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	double resultado;
	switch (oper)
	{
	case '+':
		resultado = x + y;
		break;
	case '*':
		resultado = x * y;
		break;
	case '/':
		resultado = x / y;
		break;
	case'-':
		resultado = x - y;
		break;
	default:
		resultado = 0;
		break;
	}
	return resultado;
}

