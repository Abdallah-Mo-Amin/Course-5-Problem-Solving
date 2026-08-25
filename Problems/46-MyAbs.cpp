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

float MyAbs(float Number)
{
	if (Number > 0)
		return Number;
	return Number * -1;
}

int main()
{
	float Number = ReadNumber();
	cout << "My abs Result  : " << MyAbs(Number) << endl;
	cout << "c++ abs Result : " << abs(Number) << endl;
	return 0;
}
