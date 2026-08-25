#include <iostream>
#include <cstdlib>  
#include <iomanip> // this library stored the std::setw
#include <cmath>
#include <string> // this library stired the string object
#include <vector>
#include <cctype>
#include <ctime>
#include <fstream> 
using namespace std;

int ReadNumber(string Massage)
{
    int Number;
    cout << Massage;
    cin >> Number;

    while (cin.fail() || cin.peek() != '\n')
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalid Number, Enter a valid one: " << endl;
        cin >> Number;
    }
    return Number;
}

int RandomNumber(int From, int To)
{
    int Number = rand() % (To - From + 1) + From;
    return Number;
}

void FillArrayWithRandomNumber(int arr[100], int &arrLength)
{
    for (short i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1,100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void SumOf2Arrays(int arr[100], int arr2[100], int SumArrays[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        SumArrays[i] = arr[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    int arr[100], arr2[100], arrSum[100];

    int arrLength = ReadNumber("How Many elements do you want ? ");

    FillArrayWithRandomNumber(arr, arrLength);
    FillArrayWithRandomNumber(arr2, arrLength);

    SumOf2Arrays(arr, arr2, arrSum, arrLength);
    
    
    cout << "\nArray 1 Elements:\n";
    PrintArray(arr, arrLength);

    cout << "\nArray 2 Elements:\n";
    PrintArray(arr2, arrLength);
    

    cout << "\nSum of Array 1 And Array 2 Elements: ";
    PrintArray(arrSum, arrLength);

    return 0;
}
