#pragma once
#include "base.h"
#include "IntegrationBase.h"

class LioEstimator : public FrontEnd
{
public:
    void processIMU()
	{
		c = a * a;
	}
   	int a;
	int c;
	IntegrationBase *tmp_pre_integration;
};
