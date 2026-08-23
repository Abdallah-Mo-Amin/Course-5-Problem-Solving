#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadPositveNumber(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

int DigitFrequency(int Number , short DigitToCheck)
{
	int Remainder = 0, FreqCount = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		
		if (DigitToCheck == Remainder)
			FreqCount++;
	}
	return FreqCount;
}

int main()
{
	int Number = ReadPositveNumber("Please Enter the main number ");
	short DigitToCheck = ReadPositveNumber("Please Enter a Digit to check? ");

	cout << "Digit " << DigitToCheck << " Frequency is " 
		<< DigitFrequency(Number, DigitToCheck) << " Times(s).";
	return 0;
}
