#pragma once
#include <iostream>

class FrontEnd
{
public:
    	FrontEnd(){};
    	virtual void processIMU() = 0;
		void print()
		{
      		std::cout << "hi" <<std::endl;
		}
};
