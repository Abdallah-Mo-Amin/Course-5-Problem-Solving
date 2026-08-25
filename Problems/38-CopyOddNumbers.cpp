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

void AddArrayElement(int Number, int arr[100], int &arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

void CopyOddNumbers(int arr[100], int arrcopy[100], int arrLength, int &arr2Length)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] % 2 != 0)
			AddArrayElement(arr[i], arrcopy, arr2Length);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength = 0, arr2length = 0;

	FillArrayWithRandomNumbers(arr, arrlength);

	int arr2[100];
	CopyOddNumbers(arr, arr2, arrlength, arr2length);

	cout << "Array Elements Orignal: ";
	PrintArray(arr, arrlength);

	cout << "\nArray 2 Odd Elements   :  ";
	PrintArray(arr2, arr2length);

	return 0;
}
