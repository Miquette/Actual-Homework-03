#ifndef MYINTEGER_H_
#define MYINTEGER_H_
#endif // !MYINTEGER_H_

#include <iostream>
using namespace std;

class MyInteger
{
private:
	int value;
public:
	//constructor
	MyInteger(int myvalue)
	{
		value = myvalue;
	}
	//getter for the value
	int getValue()
	{
		return value;
	}


	////constant functions
	const bool isEven()
	{
		if (value % 2 == 0)
		{
			cout << "The number you entered is even." << endl;
			return true;
		}
	}
	const bool isOdd()
	{
		if (value % 2 != 0)
		{
			cout << "The number you entered is odd." << endl;
			return true;
		}
	}
	const bool isPrime()
	{
		for (int x = 2; value > x; x++)
		{
			if (value % x == 0)
			{
				return false;
			}
			else
			{
				cout << "The number you entered is prime." << endl;
				return true;
			}
		}
	}


	////static functions
	static bool isEven(int I)
	{
		return I;	
	}
	static bool isOdd(int I)
	{
		return I;
	}
	static bool isPrime(int I)
	{
		return I;
	}


	////static and constant//////
	static bool isEven(const MyInteger& I)
	{
		return I.isEven(); ////doesn't like this, not sure why it isn't compiling?
	}
	static bool isOdd(const MyInteger& I)
	{
		return I.isOdd();
	}
	static bool isPrime(const MyInteger& I)
	{
		return I.isPrime();
	}


	////constant equals functions
	const bool equals(int I)
	{
		return getValue() == I;
	}
	const bool equals(const MyInteger& I)
	{
		return getValue() == I.getValue(); ///it hates it
	}


	////static parse function
	static int parseInt(const std::string& word) //I did not know how to do this portion so I 
	{
		int x;
		std::stringstream aa(word);
		aa >> x;
		std::cout << "Your word: " << word << " and the number for that word: " << x << std::endl;
		return x;
	}
};

