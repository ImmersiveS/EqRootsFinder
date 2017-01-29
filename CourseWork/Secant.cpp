#include <iostream>
#include <math.h>
#include "Functions.h"
#include "Secant.h"
using namespace std;
/*������� ��������� ������ ������� �����*/
double methodSecant(int select, double p, double t, double j, double x0, double x1, double e,int &numIter) {//������ �������, �����������, ��������� �� ������ ����������, ������� �� �������� ��������
	double x = 0;
	while (fabs(x1 - x0) > e) {
		x = x1 - ((x1 - x0)*func(x1,select,p,t,j) / (func(x1,select,p,t,j) - func(x0,select,p,t,j)));
		x0 = x1;
		x1 = x;
		numIter++; //��������� ��������� ��������
	};
	return x; //���������� ����������
}
