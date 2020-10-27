#pragma once
#include "base.h"
class LioEstimator : public FrontEnd
{
	public:
    	void processIMU()
		{
			c = a * a;
		}
    	int a;
		int c;
};
