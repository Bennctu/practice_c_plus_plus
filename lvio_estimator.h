#include "base.h"

class LvioEstimator : public FrontEnd
{
public:
		LvioEstimator();
		void processIMU(int a, int b)
		{
			c = a + b;
		}
		
		int c;
};