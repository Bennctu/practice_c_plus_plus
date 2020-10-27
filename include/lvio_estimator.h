#pragma once
#include "base.h"
#include "IntegrationBase.h"

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
	IntegrationBase *tmp_pre_integration;
};
