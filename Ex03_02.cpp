#include <iostream>
#include <string>
#include <cmath>
#include "HeaderLinear.h"
using namespace std;



int main()
{
	double a, b, c, d, e, f = 0;
	cout << "Enter in 6 numbers. These will be numbers along a line: " << endl;
	cin >> a >> b >> c >> d >> e >> f;
	LinearEquation L1(a, b, c, d, e, f);
 
	if (L1.isSolvable() == true)
	{
		cout << "Your equation has a solution!" << endl;
		cout << "The X solution is " << L1.getX() << endl;
		cout << "The Y solution is " << L1.getY() << endl;
	}
	else if (L1.isSolvable() == false)
	{
		cout << "Your equation has no solution. The lines are parallel." << endl;
	}



	return 0;
}