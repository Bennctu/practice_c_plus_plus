#pragma once

class IntegrationBase
{
public:
	IntegrationBase() = delete;

	/**
	 * @brief: function overloading 
	 */
	// for lio estimator
	IntegrationBase(int _acc, int _bias) : acc{_acc}, bias{_bias}
	{
		acc = acc - bias;
		bias = 0;
	}

	//for lvio estimator
	IntegrationBase(int _acc) : acc{_acc}
	{
		acc = acc - 1;
	}

	int acc;
	int bias;
};
