#pragma once
#include "base.h"
#include "LvioIntegrationBase.h"

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
	LvioIntegrationBase *tmp_pre_integration;
};
