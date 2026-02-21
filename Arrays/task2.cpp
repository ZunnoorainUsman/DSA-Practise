#include<iostream>
using namespace std;
int main()
{
	char c;
	char ch1[100],ch2[100];
	cout << "Enter the 1st array: ";
	cin.getline(ch1, 100);
	cout << "Enter the 2nd array: ";
	cin.getline(ch2, 100);
	cout << "Common elements are: ";
	for (int i = 0; ch1[i] != '\0'; ++i)
	{
		c = ch1[i];
		if (c == ' ')
		{
			continue;
		}
		bool exist = false;
		for (int j = 0; ch2[j] != '\0'; ++j)
		{
			if (c == ch2[j])
			{
				exist = true;
				break;
			}
		}
		bool alreadyExist = false;
		for (int k = 0; k < i; ++k)
		{
			if (ch1[k] == ch1[i] && exist)
			{
				alreadyExist = true;
				break;
			}
		}
		if(exist && !alreadyExist)
		{
			cout << c << " ";
		}
	}

	return 0;
}