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

int RandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

short FindNumberPoaitionInArray(int arr[100], int arrLength, int NumberToSearch)
{
	cout << "Number you are looking for is: " << NumberToSearch;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == NumberToSearch)
		{
			return i;
		}
	}
	return -1;
}

bool IsNumberInArray(int arr[100], int arrLength, int NumberToSrarch)
{
	return FindNumberPoaitionInArray(arr, arrLength, NumberToSrarch) != -1;
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << "Element [" << i << "] : " << arr[i] << endl;
	}
	cout << "\n";
}

int main()
{
	// seeds the random number generator in c++, called only once
	srand((unsigned)time(NULL));

	int arr[100];

	int arrlength = ReadPositiveNumber("Please Enter how many elements in the array? ");
	
	FillArrayWithRandomNumbers(arr, arrlength);
	cout << "\nArray 1 Elements:\n";
	PrintArray(arr, arrlength);

	int NumberToSerchFor = ReadPositiveNumber("enter a number to search for? ");
	
	//short NumberPosition = FindNumberPoaitionInArray(arr, arrlength, NumberToSerchFor);
	if (!IsNumberInArray(arr, arrlength,NumberToSerchFor))
	{
		cout << "\nThe number is not found:-( " << "\n";
	}
	else
	{
		cout << "\nThe Number is found:-)\n";
	}
	
	return 0;
}
