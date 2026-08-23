#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

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

void ReadArray(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;

	cout << "\nEnter array elements:\n";
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}

int TimeRepeated(int Number, int arr[100], int arrLength)
{
	int counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			counter++;
	}
	return counter;
}

int main()
{
	int arr[100], arrlength, NumberTocheck;

	ReadArray(arr, arrlength);

	NumberTocheck = ReadPositiveNumber("Please enter a number to check? ");

	cout << "\nOriginal array: ";
	PrintArray(arr, arrlength);

	cout << "\nNumber " << NumberTocheck;
	cout << " is repeated ";
	cout << TimeRepeated(NumberTocheck, arr, arrlength) << " time(s)\n";

	return 0;
}
