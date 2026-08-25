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


int MyFloor(float Number)
{
	

	if (Number >= 0)
		return int(Number);
	else
		return int(Number) - 1;

}

int main()
{
	float Number = ReadNumber();
	cout << "My floor Result  : " << MyFloor(Number) << endl;
	cout << "c++ floor Result : " << floor(Number) << endl;
	return 0;
}
