#include <math.h>
module student2;

double RBPO::Lab2::Variant5::Task3::f3(int n)
{
	double sum = 0;
	int i = 0;
	do
	{
		sum += a(i);
		i++;
	} while (i <= n);
	return sum;
}