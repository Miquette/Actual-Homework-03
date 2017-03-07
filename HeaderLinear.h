#pragma once


class LinearEquation
{
private:
	double a;
	double b;
	double c;
	double d;
	double e;
	double f;

public:
	// constructor
	LinearEquation(double aa, double bb, double cc, double dd, double ee, double ff)
	{
		a = aa;
		b = bb;
		c = cc;
		d = dd;
		e = ee;
		f = ff;
	}

	// the getters
	double getA()
	{
		return a;
	}
	double getB()
	{
		return b;
	}
	double getC()
	{
		return c;
	}
	double getD()
	{
		return d;
	}
	double getE()
	{
		return e;
	}
	double getF()
	{
		return f;
	}

	// checks to see if numbers are valid and that lines are not parallel
	bool isSolvable()
	{
		if ((getA() * getD()) - (getB() * getC()) != 0)
		{
			return true;
		}
		else if ((getA() * getD()) - (getB() * getC()) == 0)
		{
			return false;
		}
	}
	// defines x
	double getX()
	{
		double x;
		x = ((getE() * getD()) - (getB() * getF())) / ((getA() * getD()) - (getB() * getC()));
		return x;
	}
	
	//defines y
	double getY()
	{
		double y;
		y = ((getA() * getF()) - (getE() * getC())) / ((getA() * getD()) - (getB() * getC()));
		return y;
	}
};
