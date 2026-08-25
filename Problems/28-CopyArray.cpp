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

void ArrCopy(int arr[100], int arrcopy[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrcopy[i] = arr[i];
	}
}



int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arrlength, arrCopy[100];

	FillArrayWithRandomNumbers(arr, arrlength);
	ArrCopy(arr, arrCopy, arrlength);

	cout << "Array Elements Orignal: ";
	PrintArray(arr, arrlength);
	
	cout << "\nArray Elements after copy  :  ";
	PrintArray(arrCopy, arrlength);
	



	return 0;
}
