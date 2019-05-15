#include "pch.h"
#include "Calculator.h"
#include <iostream>

using namespace std;

int main()
{
	double valor1 = 0, valor2 = 0, valor3=0;
	char operacion = '\0';

	
	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operacion to perfore. Formate: a+b | a-b | a*b | a/b" << endl;

	while (true) {
		cin >> valor1 >> operacion >> valor2;
		Calculator Calcular;
		valor3 = Calcular.Calculate(valor1, operacion, valor2);
		cout << "El resultado de la operacion es" << "=" << valor3 << endl;
	}
	return 0;
	

}