#include<iostream>
using namespace std;
int main()
{
	char ch1[100];
	cout << "Enter the 1st array: ";
	cin.getline(ch1, 100);
	
	for (int i = 0; ch1[i] != '\0'; ++i)
	{
		bool unique = true;
		for (int j = 0; j < i; ++j)
		{
			if (ch1[i] == ch1[j])
			{
				unique = false;
				break;
			}
		}
		if (unique)
		{
			cout << ch1[i] << " ";
		}
	}

	return 0;

}
