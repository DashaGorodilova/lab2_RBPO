module;
#include <math.h>
export module student4;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant5
		{
			namespace Task5
			{
				export double f1(double x, double y);
				export double f2(double x);
				export double a(int i);
				export double f3(int n);
				export double f4(double epsilon);
			}
		}
	}
}
module :private;
double RBPO::Lab2::Variant5::Task5::f1(double x, double y)
{
	double res;
	res = 1 - 0.25 * sin(2 * x) * sin(2 * x) + cos(2 * x);
	return res;
}
double RBPO::Lab2::Variant5::Task5::f2(double x)
{
	double res;
	x <= 9 ? res = cos(2 * x) + 9 : res = -(cos(x) / (x - 9));
	return res;
}
double RBPO::Lab2::Variant5::Task5::a(int i)
{
	return pow(-1, i % 2) * ((i + 1.) / (pow(3, i) + pow(2, i)));
}
double RBPO::Lab2::Variant5::Task5::f3(int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Variant5::Task5::f4(double epsilon)
{
	double pred = a(0);
	double now;
	double sum = pred;
	for (int i = 1; ; i++)
	{
		now = a(i);
		sum += now;
		if (fabs(now - pred) <= epsilon)
		{
			return sum;
		}
		pred = now;
	}
}