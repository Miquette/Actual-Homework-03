//////////////
//Miquette Orren
//CS 172
//Exercise 10.10 
//MyInteger class
//////////////////

#include <iostream>
#include <sstream>
#include <string>
#include "Headermyinteger.h"
using namespace std;

int main()
{
	int i = 0;
	
	cout << "Give me a number, any old number: " << endl;
	cin >> i;
	MyInteger num(i);
	MyInteger num2(i);
	
	num.isEven();
	num.isOdd();
	num.isPrime();

	num.isEven(num.getValue());
	num.isOdd(num.getValue());
	num.isPrime(num.getValue());

	num.isEven(num2);
	num.isOdd(num2);
	num.isPrime(num2);

	num.equals(num.getValue());
	num.equals(num2);

	string j;
	cout << "Give me a word: " << endl;
	num.parseInt(j);

}