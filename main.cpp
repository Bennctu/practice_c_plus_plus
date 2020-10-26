#include "lvio_estimator.h"
#include "lio_estimator.h"

void main(int argc, char const *argv[])
{
	LvioEstimator lvio_estimator;
	LioEstimator lio_estimator;

	bool flag = true;
	
	for (int i = 0; i < 2; i++)
	{
		if (flag)
		{
			int a = 1;
			int b = 2;
			lvio_estimator.processIMU(a, b);
			cout << lvio_estimator.c << endl;
			flag = false;
		}
		else
		{
			int a = 3;
			lio_estimator.processIMU(a);
			cout << lio_estimator.c << endl;

		}
	}
	 
	return 0;
}