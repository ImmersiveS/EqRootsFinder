// course_work.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include "Data.h"
using namespace std;
float p, t, j;
int main()
{
	float xBisection, xNewton, xSecant;
	int selectMeth,selectFunc;
	cout << "1)-x^5+tx^4-px^3+j=0\n2)(1-px)(x^3-4x^2+tx+j)^(1/2)\n3)(px^5-tx^2+j)^3" << endl;
	cin >> selectFunc;
	cout << "Input parameters a, b, c:";
	cin >> p >> t >> j;
	cout << "Select method\n1)Bisection method\n2)Newton's method\n3)Secant method\n";cin >> selectMeth;
	switch (selectMeth) {
	case 1: {
		xBisection = methodBisection(selectFunc);
		cout << "The root of the equation: " << xBisection << endl;
		break;
	}
	case 2: {
		xNewton = methodNewton(selectFunc);
		cout << "The root of the equation: " << xNewton << endl;
		break;
	}
	case 3: {
		xSecant = methodSecant(selectFunc);
		cout << "The root of the equation: " << xSecant << endl;
		break;
	}
	default:cout << "Wrong selection!" << endl;
	}
	system("pause");
	return 0;
}



