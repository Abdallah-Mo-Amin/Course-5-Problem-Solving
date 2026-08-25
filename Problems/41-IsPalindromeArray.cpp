#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

void FillArray(int arr[100], int& arrLength)
{
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;

}

bool IsPalindromeArray(int arrSource[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arrSource[i] != arrSource[arrLength - 1 -i])
			return false;
	}
	return true;
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

	int arrSource[100], SourceLength = 0, arrDestination[100], DestinationLength = 0;

	FillArray(arrSource, SourceLength);

	cout << "\nArray 1 elements : \n";
	PrintArray(arrSource, SourceLength);


	if (IsPalindromeArray(arrSource, SourceLength))
		cout << "Yes, it's a palindrome array\n";
	else
		cout << "it's Not a palindrome array\n";
	return 0;
}
