#pragma once
#include "base.h"

class LvioEstimator : public FrontEnd
{
	public:
    	void processIMU()
		{
			c = a + b;
		}
    	int a;
    	int b;
		int c;
};
