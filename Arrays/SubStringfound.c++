#include<iostream>
using namespace std;
int main()
{
	char ch1[100];
	cout << "Enter the 1st array: ";
	cin.getline(ch1, 100);
	char ch2[100];
	cout << "Enter the 2nd array: ";
	cin.getline(ch2, 100);
	int length = 0;
	while (ch2[length] != '\0')
	{
		length++;
	}
	bool found = false;
	for (int i = 0; ch1[i] != '\0'; ++i)
	{
		int count = 0;

			for (int j = 0; j < length; ++j)
			{
				if (ch1[i+j] == ch2[j])
				{
					count++;
				}
				
			}
			if (count == length)
			{
				found = true;
				break;
			}
		
	}
	if (found)
	{
		cout << "it is present";
	}
	else {
		cout << "no";
	}
	

	return 0;
}
