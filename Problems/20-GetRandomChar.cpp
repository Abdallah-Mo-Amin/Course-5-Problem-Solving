#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enCharType{SmallLetter=1, CapitalLetter=2, SpecialChar=3, Digit=4};

int RandomNumber(int From, int To)
{	
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
	switch (CharType)
	{
	case SmallLetter:
		return char(RandomNumber(97, 122));
		break;
	case CapitalLetter:
		return char(RandomNumber(65, 90));
		break;
	case SpecialChar:
		return char(RandomNumber(33, 47));
		break;
	case Digit:
		return char(RandomNumber(48, 57));
		break;
	default:
		break;
	}
}

int main()
{	
	// seeds the random number generator in c++, called only once
	srand((unsigned)time(NULL));

	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialChar) << endl;
	cout << GetRandomCharacter(enCharType::Digit) << endl;
	return 0;
}
