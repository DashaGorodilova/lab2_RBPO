#include <math.h>

import student1;
double RBPO::Lab2::Variant5::Task2::f1(double x, double y)
{
	double res;
	res = 1 - 0.25 * sin(2 * x) * sin(2 * x) + cos(2 * x);
	return res;
}
double RBPO::Lab2::Variant5::Task2::f2(double x)
{
	double res;
	if (x <= 9)
	{
		res = cos(2 * x) + 9;
	}
	else
	{
		res = -(cos(x) / (x - 9));
	}
	return res;
}
double a(int i)
{
	return pow(-1, i % 2) * ((i + 1.) / (pow(3, i) + pow(2, i)));
}
double RBPO::Lab2::Variant5::Task2::f3(int n)
{
	double sum = 0;
	int i = 0;
	while (i <= n) {
		sum += a(i);
		i++;
	}
	return sum;
}
double RBPO::Lab2::Variant5::Task2::f4(double epsilon)
{
	double pred = 0;
	double now = a(0);
	double sum = pred + now;
	int i = 1;
	while (fabs(now - pred) > epsilon)
	{
		pred = now;
		now = a(i);
		sum += now;
		i++;
	}
	return sum;
}