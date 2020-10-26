#pragma once
#include "base.h"
class LioEstimator : public FrontEnd
{
public:
    LioEstimator():a(0) {}

    void processIMU(int a)
		{
			c = a * a;
		}
    int a;
		int c;
};
