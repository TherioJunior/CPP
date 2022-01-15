// Standard Libs
#include <iostream>

// Namespaces
using namespace std;

namespace Util
{
	void PrintTwoDoubles(const char* prefix, double double1, double double2) noexcept
	{
		cout << prefix;
		cout << " one: " << double1;
		cout << endl;

		cout << prefix;
		cout << " two: " << double2;
		cout << endl;
	}
}