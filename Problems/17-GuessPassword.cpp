#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string ReadPassword()
{
	string Password;
	cout << "Enter a 3-letter Password (all capital)? ";
	cin >> Password;
	return Password;
}

bool GuessPassword(string Originalpassword)
{
	cout << "\n";
	string word = "";
	int counter = 0;

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				counter++;

				cout << "Trial [" << counter << "]:" << word << endl;
				if (word == Originalpassword)
				{
					cout << "\nPassword is " << word 
						<< "\nFound after " << counter << " Trial(s)\n";
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}

int main()
{
	GuessPassword(ReadPassword());
	
	return 0;
}
