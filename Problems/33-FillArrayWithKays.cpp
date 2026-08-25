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
	Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

	return Key;
}

void FillArrayWithKeys(string arr[100], short NumberOfKeys)
{
	for (int i = 0; i < NumberOfKeys; i++)
	{
		arr[i] = GenerateKey();
	}
}

void PrintStringArray(string arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Array [" << i << "] : " << arr[i] << endl;
	}
	cout << "\n";
}

int main()
{
	// seeds the random number generator in c++, called only once
	srand((unsigned)time(NULL));

	string arr[100];

	short NumberOfKeys = ReadPositiveNumber("Please Enter how many keys do you want to generate? ");
	FillArrayWithKeys(arr, NumberOfKeys);
	PrintStringArray(arr, NumberOfKeys);

	return 0;
}
