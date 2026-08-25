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
	int N = 0;
	do
	{
		cout << Massage;
		cin >> N;
	} while (N <= 0);

	return N;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

int GenrateRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "Enter Number of elements\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = GenrateRandomNumber(1, 100);
	}
	cout << endl;
}

void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int &arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if(CheckPrime(arrSource[i]) == enPrimeOrNotPrime::Prime)
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}

int main()
{
	srand((unsigned)time(NULL)); // we put zero to ensure the random number doesn't doblicate

	int arr[100], arrlength = 0;

	FillArrayWithRandomNumbers(arr, arrlength);

	cout << "\nArray 1 elements : \n";
	PrintArray(arr, arrlength);

	int arr2[100], arr2Length = 0;
	CopyPrimeNumbers(arr, arr2, arrlength, arr2Length);

	cout << "\nArray 2 Prime numbers : \n";
	PrintArray(arr2, arr2Length);

	return 0;
}
