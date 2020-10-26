#pragma once
#include "base.h"

class LvioEstimator : public FrontEnd
{
public:
    LvioEstimator():a(0),b(0) {};

    void processIMU(int a, int b)
		{
			c = a + b;
		}
    int a;
    int b;
		int c;
};
