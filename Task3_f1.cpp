#include <math.h>
module student2;
double RBPO::Lab2::Variant5::Task3::f1(double x, double y)
{
	double res;
	res = 1 - 0.25 * sin(2 * x) * sin(2 * x) + cos(2 * x);
	return res;
}