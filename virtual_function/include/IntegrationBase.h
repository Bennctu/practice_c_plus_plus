#pragma once
#include <iostream>

class IntegrationBase
{
public:
	IntegrationBase() = delete;

	// for lio estimator
	IntegrationBase(int _acc, int _bias) : acc{_acc}, bias{_bias}
	{
		acc = acc - bias;
		bias = 0;
	}

	virtual int add()
	{
		return total = 2*acc + 1;
	}
	
	virtual void show_total()
	{
		std::cout << this->add() << std::endl;
	}

	int acc;
	int bias;
	int total;
};
