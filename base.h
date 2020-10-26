
#include <iostream.h>

class FrontEnd
{
public:
		virtual void processIMU() = 0;
		void print()
		{
			cout << "hi" <<endl;
		}
};