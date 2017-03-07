#ifndef LINE_H_
#define LINE_H_
#endif // !LINE_H_

class Line
{
	private:
		float X1;
		float Y1;
		float X2;
		float Y2;
		float X3;
		float Y3;
		float X4;
		float Y4;
		float a;
		float b;
		float c;
		float d;
		float e;
		float f;
public:
	
	// constructor
	Line(float xx1, float yy1, float xx2, float yy2, float xx3, float yy3, float xx4, float yy4)
	{
		X1 = xx1;
		Y1 = yy1;
		X2 = xx2;
		Y2 = yy2;
		X3 = xx3;
		Y3 = yy3;
		X4 = xx4;
		Y4 = yy4;
	}

	//the getters of the points
	float getX1()
	{
		return X1;
	}
	float getY1()
	{
		return Y1;
	}
	float getX2()
	{
		return X2;
	}
	float getY2()
	{
		return Y2;
	}
	float getX3()
	{
		return X3;
	}
	float getY3()
	{
		return Y3;
	}
	float getX4()
	{
		return X4;
	}
	float getY4()
	{
		return Y4;
	}
	//////////////////////////////////////////
	// getters that define all letter variables
	float geta()
	{
		a = Y1 - Y2;
		return a;
	}
	float getb()
	{
		b = X1 - X2;
		return b;
	}
	float getc()
	{
		c = Y3 - Y4;
		return c;
	}
	float getd()
	{
		d = X3 - X4;
		return d;
	}
	float gete()
	{
		e = (geta() * X1 + getb() * Y1);
		return e;
	}
	float getf()
	{
		f = (getc() * X3 + getd() * Y3);
		return f;
	}
	/////////////////////////////////////////////////////
	//checks to see if numbers are valid and that lines are not parallel
	bool isSolvable()
	{
		if ((geta() * getd()) - (getb()*getc()) != 0)
		{
			return true;
		}
		else if ((geta()*getd()) - (getb()*getc()) == 0)
		{
			return false;
		}
	}

	// defines x
	float getX()
	{
		float x;
		x = ((e * d) - (b * f)) / ((a * d) - (b * c));
		return x;
	}

	//defines y
	float getY()
	{
		float y;
		y = ((a * f) - (e * c)) / ((a * d) - (b * c));
		return y;
	}
};
