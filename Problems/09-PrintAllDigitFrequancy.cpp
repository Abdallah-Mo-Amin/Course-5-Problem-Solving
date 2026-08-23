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

int CountDigitFrequency(int Number , short DigitToCheck)
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

void PrintAllDigitFrequency(int Number)
{
	for (int i = 0; i < 10; i++)
	{
		short DigitsFrequency = 0;
		DigitsFrequency = CountDigitFrequency(Number, i);

		if (DigitsFrequency > 0)
			cout << "Digit " << i << " Frequency is " << DigitsFrequency << " time(s).\n";
	}
}


int main()
{
	int Number = ReadPositveNumber("Please Enter the main number ");
	PrintAllDigitFrequency(Number);

	return 0;
}
