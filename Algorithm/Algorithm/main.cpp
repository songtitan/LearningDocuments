#include <iostream>

#include "1_ContainsNearbyDuplicate.h"

using namespace std;
int main()
{
	int a[4] = { 1,2,3,1 };
	vector<int> b(a, a + 4);
	if (ContainsNearbyDuplicate(b, 3))
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}
}