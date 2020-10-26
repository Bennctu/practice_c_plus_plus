#include "base.h"
class LioEstimator : public FrontEnd
{
public:
		LioEstimator();
		void processIMU(int a)
		{
			c = a * a;
		}
		
		int c;
};
