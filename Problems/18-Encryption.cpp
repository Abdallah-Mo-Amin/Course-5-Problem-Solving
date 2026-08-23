#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string ReadText()
{
	string Text;
	cout << "Enter a Text? ";
	getline(cin, Text);
	return Text;
}

string EncryptionText(string Text, short EncryptionKey)
{
	
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}

	return Text;
}

string DecryptionText(string Name, short EncryptionKey)
{
	int length = Name.length();

	for (int i = 0; i <= length; i++)
	{
		Name[i] = char((int)Name[i] - EncryptionKey);
	}

	return Name;
}

int main()
{
	const short EncryptionKey = 2;
	string Text = ReadText();
	string TextAfterEncrption =EncryptionText(Text, EncryptionKey);
	string TextAfterDecrption = DecryptionText(TextAfterEncrption, EncryptionKey);

	cout << "Text Before Encryption : " << Text << endl;
	cout << "Text After Encryption : " << TextAfterEncrption << endl;
	cout << "Text After Decryption : " << TextAfterDecrption << endl;
	
	return 0;
}
