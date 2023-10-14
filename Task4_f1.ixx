module;
#include <math.h>
export module student3:f1;
//export module student3:f1;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant5
		{
			namespace Task4
			{
				export double f1(double x, double y)
				{
					double res;
					res = 1 - 0.25 * sin(2 * x) * sin(2 * x) + cos(2 * x);
					return res;
				}
			}
		}
	}
}