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
			lvio_estimator.a = 1;
			lvio_estimator.b = 2;
			lvio_estimator.processIMU();// function input type need to be same as front-end class
      		std::cout << lvio_estimator.c << std::endl;

      		int _acc = 2;
      		lvio_estimator.tmp_pre_integration = new LvioIntegrationBase{_acc};
      		std::cout << lvio_estimator.tmp_pre_integration->acc << std::endl;
      		lvio_estimator.tmp_pre_integration->add();
      		// lvio_estimator.tmp_pre_integration->show_total(); // inaccessible within this context
			flag = false;
		}
		else
		{
			lio_estimator.a = 3;
			lio_estimator.processIMU();
      		std::cout << lio_estimator.c << std::endl;

      		int _acc = 5;
      		int _bias = 3;
      		lio_estimator.tmp_pre_integration = new IntegrationBase{_acc, _bias};
      		std::cout << lio_estimator.tmp_pre_integration->acc << std::endl;
      		lio_estimator.tmp_pre_integration->add();
      		lio_estimator.tmp_pre_integration->show_total();
		}
	}
	 
	return 0;
}
