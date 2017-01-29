#include <iostream>
#include <math.h>
#include "Functions.h"
#include "Bisection.h"
using namespace std;
/*������� ��������� ������ ������� �������*/
double methodBisection(int select, double p, double t, double j, double a, double b, double e,int &numIter) { //������ �������, �����������, ������� �� ����� �������, ������� �� �������� ��������
	double x = (a + b) / 2; //����������� ����������� �������� ��������� ������
	while ((fabs(b - a) > e) && (func(x,select,p,t,j) != 0)) { 
		numIter++; //��������� ��������� �-� ��������
		if (func(a,select,p,t,j)*func(x,select,p,t,j) < 0) 
			b = x;
		else
			a = x;
		x = (a + b) / 2;
	}
	return x; //���������� ���������� ������
}