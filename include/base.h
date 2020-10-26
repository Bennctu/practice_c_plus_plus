#pragma once
#include <iostream>

class FrontEnd
{
public:
    FrontEnd();
    virtual void processIMU();
		void print()
		{
      std::cout << "hi" <<std::endl;
		}
};
