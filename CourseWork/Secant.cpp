#include <iostream>
#include <math.h>
#include "Functions.h"
#include "Secant.h"
using namespace std;
/*Функція уточнення кореня методом січних*/
double methodSecant(int select, double p, double t, double j, double x0, double x1, double e,int &numIter) {//обрана функція, коефіцієнти, початкове та кінцеве наближення, точність та лічильник ітерацій
	double x = 0;
	while (fabs(x1 - x0) > e) {
		x = x1 - ((x1 - x0)*func(x1,select,p,t,j) / (func(x1,select,p,t,j) - func(x0,select,p,t,j)));
		x0 = x1;
		x1 = x;
		numIter++; //збільшення лічильника ітерацій
	};
	return x; //повернення результату
}
