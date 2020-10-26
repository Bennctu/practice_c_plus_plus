#include "lvio_estimator.h"
#include "lio_estimator.h"

int main(int argc, char **argv)
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
      std::cout << lvio_estimator.c << std::endl;
			flag = false;
		}
		else
		{
			int a = 3;
			lio_estimator.processIMU(a);
      std::cout << lio_estimator.c << std::endl;

		}
	}
	 
	return 0;
}
