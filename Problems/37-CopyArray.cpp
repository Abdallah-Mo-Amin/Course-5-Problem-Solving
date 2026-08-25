#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

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

void CopyArrayUsingAddArrayElement(int arr[100], int arrcopy[100], int arrLength, int arr2Length)
{
	for(int i = 0; i < arrLength; i++)
		AddArrayElement(arr[i], arrcopy, arr2Length);
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength = 0, arr2length = 0;

	FillArrayWithRandomNumbers(arr, arrlength);

	int arr2[100];
	CopyArrayUsingAddArrayElement(arr, arr2, arrlength, arr2length);

	cout << "Array Elements Orignal: ";
	PrintArray(arr, arrlength);

	cout << "\nArray Elements after copy  :  ";
	PrintArray(arr2, arrlength);

	return 0;
}
