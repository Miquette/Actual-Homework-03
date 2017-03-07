///////////////
//Miquette Orren
// CS 172
//Ex_03 Exercise 9.10
///////////////

#include <iostream>
#include "Headerintersection.h"
using namespace std;

int main()
{
	float x1, y1, x2, y2, x3, y3, x4, y4 = 0;
	cout << "Enter the x and y coordinates of two points on a line: " << endl;
	cout << "Then, enter the x and y coordinates of two points on another line: " << endl;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	Line L1(x1, y1, x2, y2, x3, y3, x4, y4);

	if (L1.isSolvable() == true)
	{
		cout << "The point of intersection between these two lines is ( " << L1.getX() << ", " << L1.getY() << ")." << endl;
	}
	else
		cout << "There is no point of intersection." << endl;

	return 0;

}
