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

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyCeil(float Number)
{
	if (abs(GetFractionPart(Number)) > 0)
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	else
		return int(Number);
}

int main()
{
	float Number = ReadNumber();
	cout << "My floor Result  : " << MyCeil(Number) << endl;
	cout << "c++ floor Result : " << ceil(Number) << endl;
	return 0;
}
