#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

enum enPrimeOrNotPrime { Prime = 1, NotPrime = 2 };

enPrimeOrNotPrime CheckPrime(int& Number)
{
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeOrNotPrime::NotPrime;
	}
	return enPrimeOrNotPrime::Prime;
}

int ReadPositiveNumber(string Massage)
{
	int Number = 0;
	do
	{
		cout << Massage ;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int GenerateRandomNumber(int From, int To)
{
	
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int Arr1[100], int &arrLength)
{
	cout << "How many elemnts? ";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		Arr1[i] = GenerateRandomNumber(1, 100);
	}
}

void PrintArray(int Arr1[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << Arr1[i] << " ";
	}
	cout << endl;
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength, int &arr2Length)
{
	int counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimeOrNotPrime::Prime)
		{
			arrDestination[counter] = arrSource[i];
			counter++;
		}
	}
	arr2Length = --counter;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100], Length;

	FillArrayWithRandomNumbers(arr1, Length);

	cout << "\n\nArray 1 elements : ";
	PrintArray(arr1, Length);

	int arr2[100], arr2length;
	CopyArray(arr1, arr2, Length, arr2length);

	cout << "\n\nArray 2 elements : ";
	PrintArray(arr2, arr2length);

	return 0;
}
