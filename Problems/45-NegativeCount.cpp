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
		arr[i] = GenrateRandomNumber(-100, 100);
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

int NegativeCount(int arr[100], int arrLength)
{
	int counter = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] < 0)
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

	cout << "\npositive number counts is: " << NegativeCount(arr, arrlength) << endl;

	return 0;
}
