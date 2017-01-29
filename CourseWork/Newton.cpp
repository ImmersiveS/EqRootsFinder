#include <iostream>
#include <math.h>
#include "Functions.h"
#include "Newton.h"
using namespace std;
/*������� ��������� ������ ������� �������*/
double methodNewton(int select, double p, double t, double j, double a, double b, double e, double x0, int &numIter) { //������ �������, �����������, ������� �� ����� �������, �������, ��������� ���������� �� �������� ��������
	double x = x0;
	if ((derivate(x, select, p, t, j) == 0) && func(x, select, p, t, j) != 0)numIter = -1;
	if (derivate(x, select, p, t, j) == 0)return x;
	double x1 = g(x, select, p, t, j);
	while (abs(x-x1)>e)
	{
		numIter++; //��������� ��������� ��������
		if(numIter>600000) break;
		x = x1;
		if ((derivate(x1, select, p, t, j) == 0) && func(x1, select, p, t, j) != 0)numIter = -1;
		if (derivate(x1, select, p, t, j) == 0)break;
		x1 = g(x1,select,p,t,j);
	}
	return x1; //���������� ���������� ������
}