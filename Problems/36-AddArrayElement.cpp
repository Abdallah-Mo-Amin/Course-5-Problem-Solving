#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber()
{
	int Num = 0;
	do
	{
		cout << "Please enter a number? ";
		cin >> Num;
	} while (Num < 0);
	return Num;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength - 1] = Number;
}

void InputUserNumberInArray(int arr[100], int &arrLength)
{
	bool AddMore = true;
	do
	{
		AddArrayElement(ReadPositiveNumber(), arr, arrLength);

		cout << "\nDo you want to add more numbers? [0]:No, [1]:yes? ";
		cin >> AddMore;
	} while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main()
{
	// seeds the random number generator in c++, called only once
	srand((unsigned)time(NULL));

	int arr[100], arrlength = 0;
	
	InputUserNumberInArray(arr, arrlength);

	cout << "\nArray length: " << arrlength << "\n";
	cout << "Array elements: ";
	PrintArray(arr, arrlength);

	
	return 0;
}
