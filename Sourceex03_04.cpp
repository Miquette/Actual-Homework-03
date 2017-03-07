/////////////
//Miquette Orren
//CS 172
//Ex 03 Exercise 10.4
/////////////

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void swapper(string x, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		char theword = x[i];
		int index = i;

		for (int y = i + 1; y < size; y++)
		{
			if (theword > x[y])
			{
				theword = x[y];
				index = y;
			}
		}

		if (index != i)
		{
			x[index] = x[i];
			x[i] = theword;
		}
	}
	cout << "The word alphabetized: " << x << endl;
}



int main()
{
	string word;
	cout << "Enter a string of characters: " << endl;
	cin >> word;
	swapper(word, word.size());
	

	return 0;
}
