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

void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
	cout << "Enter Numver of elements\n";
	cin >> arrLength;

	cout << "\nFilling the array with random numbers\n";
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

int MinNumberInTheArray(int arr[100], int arrLength)
{
	int Min = 0;
	Min = arr[0];

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < Min)
			Min = arr[i];
	}
	return Min;
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength;

	FillArrayWithRandomNumbers(arr, arrlength);

	cout << "Array Elements: ";
	PrintArray(arr, arrlength);


	cout << "\nMax Number is: " << MinNumberInTheArray(arr, arrlength) << endl;

	return 0;
}
