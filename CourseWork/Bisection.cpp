#include <iostream>
#include <math.h>
#include "Functions.h"
#include "Bisection.h"
using namespace std;
/*Функція уточнення кореня методом Ньютона*/
double methodBisection(int select, double p, double t, double j, double a, double b, double e,int &numIter) { //обрана функція, коефіцієнти, початок та кінець проміжка, точність та лічильник ітерацій
	double x = (a + b) / 2; //ініціалізація початкового значення серединою відрізка
	while ((fabs(b - a) > e) && (func(x,select,p,t,j) != 0)) { 
		numIter++; //збільшення показника к-ті ітерацій
		if (func(a,select,p,t,j)*func(x,select,p,t,j) < 0) 
			b = x;
		else
			a = x;
		x = (a + b) / 2;
	}
	return x; //повернення уточненого кореня
}