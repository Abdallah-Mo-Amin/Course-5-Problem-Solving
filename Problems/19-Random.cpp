#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int main()
{	
	// seeds the random number generator in c++, called only once
	srand((unsigned)time(NULL));

	/*cout << rand() % 10 << endl;
	cout << rand() << endl;*/

	cout << RandomNumber(20, 50) << endl;
	cout << RandomNumber(1, 5) << endl;
	cout << RandomNumber(1, 5) << endl;

	return 0;
}


/*
every time you call rand() it will return a number from 0 to the max size of int 

*/
