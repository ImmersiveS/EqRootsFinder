#include <iostream>
#include <math.h>
#include "Functions.h"
/*������� ���������� ������� �����������*/
double func(double x,int select, double p, double t, double j) { //�������� �, ������ �������, �����������
	switch (select) {
	case 1: return -pow(x, 5) + p*pow(x, 4) - t*pow(x, 3) + j;
	case 2: return -p*pow(x, 4) + t*cbrt(x) - j*sqrt(x) + 9;
	case 3: return cbrt((p*pow(x, 5) - t*pow(x, 2) + j));
	}
}
/*������� ��� ���������� ��������*/
double derivate(double x, int select, double p, double t, double j) { //�������� �, ������ �������, �����������
	switch (select) {
	case 1: return -5 * pow(x, 4) + p * 4 * pow(x, 3) - t * 3 * pow(x, 2);
	case 2: return -j / (2 * sqrt(x)) - 4 * p*pow(x, 3) + t / (3 * cbrt(pow(x, (2))));
	case 3: return (5 * p*pow(x, 4) - 2 * t*x)/(3*pow(cbrt((j + (p*pow(x, 5)) - t*pow(x, 2))),2));
	}
}
/*������� ��� ��������� ������� ������*/
double g(double x,int select, double p, double t, double j) { //�������� �, ������ �������, �����������
	 return x - func(x,select,p,t,j) / derivate(x,select,p,t,j);
}
/*������� ��� �������� �� �-�� ������*/
int checkPlural(double a, double b,int select, double p, double t, double j) { //�������, ������ �������, �����������
	double f0 = func(a, select, p, t, j);
	double f1 = 0;
	int count = 0;
	for (a;a <= b;a += 0.1) {
		f0=	func(a, select, p, t, j);
		
		if (f0*f1 < 0) { count++;}
		if (count>1)return 2;
		f1 = f0;

	}
	if (count == 1)return 1;
	return 0;
}