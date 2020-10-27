#pragma once
#include "IntegrationBase.h"

class LvioIntegrationBase : IntegrationBase
{
public:
	LvioIntegrationBase() = delete;

	//for lvio estimator
	LvioIntegrationBase(int acc) : IntegrationBase(acc, bias)
	{
		acc = acc - 1;
	}

	int add()
	{
		return total = acc + 1;
	}
	
	int acc;
	int total;
	
};
