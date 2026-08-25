#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

float ReadNumber()
{
	float Num = 0;
	cout << "Please enter a number: " << endl;
	cin >> Num;
	return Num;
}

int MySqrt(float Number)
{
	return pow(Number, 0.5);
}

int main()
{
	float Number = ReadNumber();
	cout << "My sqrt Result  : " << MySqrt(Number) << endl;
	cout << "c++ sqrt Result : " << sqrt(Number) << endl;
	return 0;
}
