#pragma once
#ifndef MYPOINT_H_
#define MYPOINT_H_

class MyPoint
{
private:
	double x;
	double y;

public:
	MyPoint(){
		x = 0;
		y = 0;
	}

	MyPoint(double n, double m) {
		x = n;
		y = m;
	}

	double getMyPointX()
	{
		return x;
	}
	double getMyPointY()
	{
		return y;
	}

	double distance(MyPoint p1)
	{
		double dis;
		dis = sqrt(pow(getMyPointX() - p1.getMyPointX(), 2.0) + pow(getMyPointY() - p1.getMyPointY(), 2.0));
		return dis;
	}

};

#endif //MYPOINT