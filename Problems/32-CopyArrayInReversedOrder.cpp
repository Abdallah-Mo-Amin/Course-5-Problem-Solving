#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int ReadPositiveNumber(string Massage)
{
	int N = 0;
	do
	{
		cout << Massage << endl;
		cin >> N;
	} while (N <= 0); 

	return N;
}

void Swap(int& A, int& B)
{
	int Temp = A;
	A = B;
	B = Temp;
}

int GenrateRandomNumber(int From, int To)
{
	int RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100],  int &arrLength)
{
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

void CopyArrayInReverseOrder(int arrSource[100], int ArrDestination[100], int arrLength)
{
	int counter = arrLength - 1;
	for (int i = 0; i < arrLength; i++)
	{
		ArrDestination[i] = arrSource[arrLength - 1 - i];
	}
}

int main()
{
	srand((unsigned)time(NULL)); // we put zero to ensure the random number doesn't doblicate

	int arrlength = ReadPositiveNumber("\nEnter Number Of elements");
	int arr[100];

	FillArrayWithRandomNumbers(arr, arrlength);
	
	cout << "\nArray elements Before Revercing : \n";
	PrintArray(arr, arrlength);

	int arr2[100];
	CopyArrayInReverseOrder(arr, arr2, arrlength);
	cout << "\nArray elements After Revercing : \n";
	PrintArray(arr2, arrlength);

	return 0;
}
