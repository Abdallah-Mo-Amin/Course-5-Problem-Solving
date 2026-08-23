#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialChar = 3, Digit = 4 };

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

int ReadPositiveNumber(string Massage)
{
	int Num = 0;
	do
	{
		cout << Massage << endl;
		cin >> Num;
	} while (Num < 0);
	return Num;
}

string GenerateWord(enCharType CharType, short Length)
{
	string Word;

	for (int i = 1; i <= Length; i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string GenerateKey()
{
	string Key = "";
	Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4) ;

	return Key;
}

void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [" << i << "] : " << GenerateKey() << endl;
	}
}

int main()
{
	// seeds the random number generator in c++, called only once
	srand((unsigned)time(NULL));

	GenerateKeys(ReadPositiveNumber("Please Enter how many keys do you want to generate? "));

	return 0;
}
