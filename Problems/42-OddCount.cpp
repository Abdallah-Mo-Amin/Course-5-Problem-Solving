#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

enNumberType CheckNumberType(int Num)
{
	int Result = Num % 2;
	if (Result == 0)
	{
		return enNumberType::Even;
	}
	else
	{
		return enNumberType::Odd;
	}
}

int GenrateRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "Enter Numver of elements\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenrateRandomNumber(1, 100);
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

int OddCount(int arr[100], int arrLength)
{
	int counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckNumberType(arr[i]) == enNumberType::Odd)
			counter++;
	}
	return counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength = 0;

	FillArrayWithRandomNumbers(arr, arrlength);

	cout << "Array Elements Orignal: ";
	PrintArray(arr, arrlength);

	cout << "\nOdd number counts is: " << OddCount(arr, arrlength) << endl;

	return 0;
}
