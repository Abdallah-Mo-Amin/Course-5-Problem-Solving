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

void FillArrayWithNumbersFrom1toN(int arr[100],  int &arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1;
	}
	cout << endl;
}

void ShaffleArray(int arr[100],  int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		Swap(arr[GenrateRandomNumber(1, arrLength) - 1], arr[GenrateRandomNumber(1, arrLength) - 1]);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}


void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = arrLength - 1; i > 0; i--)
    {
        int j = RandomNumber(0, i);
        Swap(arr[i], arr[j]);
    }
}

int main()
{
	srand((unsigned)time(NULL)); // we put zero to ensure the random number doesn't doblicate

	int arrlength = ReadPositiveNumber("\nEnter Number Of elements");
	int arr[100];

	FillArrayWithNumbersFrom1toN(arr, arrlength);
	
	cout << "\nArray elements Before Shuffleing : \n";
	PrintArray(arr, arrlength);

	cout << "\nArray elements After Shuffleing : \n";
	ShaffleArray(arr, arrlength);
	PrintArray(arr, arrlength);

	return 0;
}
