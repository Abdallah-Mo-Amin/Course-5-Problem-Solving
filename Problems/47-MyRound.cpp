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

int MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);

	float fractionPart = GetFractionPart(Number);

	
	if (abs(fractionPart) >= 0.5)
	{
		if (Number > 0)
			return ++IntPart;
		if (Number < 0)
			return --IntPart;
	}
	else
		return IntPart;
}

int main()
{
	float Number = ReadNumber();
	cout << "My Round Result  : " << MyRound(Number) << endl;
	cout << "c++ Round Result : " << round(Number) << endl;
	return 0;
}
